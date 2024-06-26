//
// Created by letme on 3/17/2024.
//

#include "Player.h"
#include<iostream>
#include<string>
#include <algorithm>
#include<vector>
#include<sstream>
#include<fstream>


int Player:: file_line=1; //declare a static field
std::ifstream file_out;
Player::Player() {

}
Player::~Player()
{


}

void Player::Upload() // the method used to input the NBA_2024_stats.txt file data into the object
{
    Player pl;
    std::vector<std::string> se;
    pl.NewData(se);

    std::fstream file("NBA_2024_stats.txt",std::ios::in);
   std::stringstream s;
   std::string line;
    ++file_line;
   int current_line=0;
   while(!file.eof())
   {
       std::getline(file,line);
       current_line++;
       if(current_line==Player::file_line)
       {
           s<<line;
           s>>Player::id>>Player::name>> Player::team>> Player::GP >> Player::MIN>> Player::PTS >> Player::FG_PERC>> Player::THREE_P_PERC>>Player::FT_PERC>>Player::REB >> Player::AST>> Player::STL >> Player::BLK;

           Player::setNew();

           break;
       }
       else
       {}
   }

}

int Player::getId() const { //below we have getter and setter methods
    return id;
}

void Player::setId(int id) {
    Player::id = id;
}

const std::string &Player::getName() const {
    return name;
}

void Player::setName(const std::string &name) {
    Player::name = name;
}

const std::string &Player::getTeam() const {
    return team;
}

void Player::setTeam(const std::string &team) {
    Player::team = team;
}

int Player::getGp() const {
    return GP;
}

void Player::setGp(int gp) {
    GP = gp;
}

double Player::getMin() const {
    return MIN;
}

void Player::setMin(double min) {
    MIN = min;
}

double Player::getPts() const {
    return PTS;
}

void Player::setPts(double pts) {
    PTS = pts;
}

double Player::getFgPerc() const {
    return FG_PERC;
}

void Player::setFgPerc(double fgPerc) {
    FG_PERC = fgPerc;
}

double Player::getThreePPerc() const {
    return THREE_P_PERC;
}

void Player::setThreePPerc(double threePPerc) {
    THREE_P_PERC = threePPerc;
}

double Player::getFtPerc() const {
    return FT_PERC;
}

void Player::setFtPerc(double ftPerc) {
    FT_PERC = ftPerc;
}

double Player::getReb() const {
    return REB;
}

void Player::setReb(double reb) {
    REB = reb;
}

double Player::getAst() const {
    return AST;
}

void Player::setAst(double ast) {
    AST = ast;
}

double Player::getStl() const {
    return STL;
}

void Player::setStl(double stl) {
    STL = stl;
}

double Player::getBlk() const {
    return BLK;
}

void Player::setBlk(double blk) {
    BLK = blk;
}

void Player::setNew()
{
    Player::NEW=Player::PTS*Player::REB*Player::AST*0.001;
    Player::NEW=(Player::NEW * 10) / 10.0;
}

void Player::ShowData( bool original) // method to show the csv and sorted txt file depending on the boolean value
{
    if(original)
    {
        std::ifstream file("..\\NBA_2024_stats.csv");
        std::string show;

        while (!file.eof()) {
            file >> show;
            std::cout << show << std::endl << std::endl;
        }
        file.close();
    }
    else
    {
        std::ifstream file(" NBA_sorted_stats.txt");
        std::string show;

        while (!file.eof()) {
            std::getline(file,show);
            std::cout << show << std::endl ;
        }
        file.close();
    }
}



void Player::NewData(std::vector<std::string> target)  // the method used to create the NBA_2024_stats.txt file
{
    std::ifstream file_4out;
    std::ofstream file_4in;
    file_4out.open("..\\NBA_2024_stats.csv",std::ios::in);
    file_4in.open("NBA_2024_stats.txt", std::ios::app);

    do {

        std::string fetch = "";


        while (!file_4out.eof()) {

            getline(file_4out, fetch);
            replace(fetch.begin(), fetch.end(), ',', ' ');
            file_4in << fetch<<std::endl;

        }

        file_4out.close();
    } while (file_4in.fail());

    if(!target.empty())
    {
        for (int i = 0; i < target.size(); i++) {
            if (i != target.size() - 1) {
                file_4in << target[i] << " ";
            } else {
                file_4in << target[i];
            }
        }
        file_4in << std::endl;
    }
    file_4in.close();
    file_4out.close();
}

std::string Player::Print()  //method used to give the objects fields in a string form
{
    std::string result = "";

    result =std::to_string(Player::id) + " " +Player::name + " " + Player::team + " " + std::to_string(GP) + " " + std::to_string(MIN)
            + " " + std::to_string(PTS) + " " + std::to_string(FG_PERC) + " " + std::to_string(REB) +
            " " + std::to_string(AST) + " " + std::to_string(STL) + " " + std::to_string(BLK);
    return result;
}

void Player::CreateFile() //the method used to create the NBA_sorted_stats.txt file
{
    std::ofstream file(" NBA_sorted_stats.txt",std::ios::app);

        file<<Player::getId()<<" "<<Player::getName()<<" "<<Player::getTeam()<<" "
            <<Player::getGp()<<" "<<Player::getMin()<<" "<<Player::getPts()<<" "<<Player::getFgPerc()<<" "<<Player::getThreePPerc()<<" "
            <<Player::getFtPerc()<<" "<<Player::getReb()<<" "<<Player::getAst()<<" "<<Player::getStl()<<" "<<Player::getBlk()<<std::endl;
       file.close();
}

void Player::FinalMethod() // teh final method to put the NEW column in the file
{
    std::ifstream file_4out;
    std::ofstream file_4in;
    file_4out.open("NBA_2024_stats.txt",std::ios::in);
    file_4in.open("NBA_processed_stats.txt");
    std::string fetch = "";

    getline(file_4out, fetch);
    file_4in<<fetch<<" NEW"<<std::endl;

    for(int i=0;i<12;i++)
    {
        Player final;
        final.Upload();
        file_4in<<final.getId()<<" "<<final.getName()<<" "<<final.getTeam()
                <<" "<<final.getGp()<<" "<<final.getMin()<<" "<<final.getPts()<<" "
                <<final.getFgPerc()<<" "<<final.getThreePPerc()<<" "<<final.getFtPerc()<<" "
                <<final.getReb()<<" "<<final.getAst()<<" "<<final.getStl()<<" "
                <<final.getBlk()<<" "<<final.NEW<<std::endl;
    }


}