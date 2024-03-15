//
// Created by letme on 13/03/2024.
//

#ifndef C___PROJECT_PLAYER_H
#define C___PROJECT_PLAYER_H

#endif //C___PROJECT_PLAYER_H
#include <iostream>
#include<string>
#include<sstream>
#include <algorithm>


using namespace std;
class Player
{
  public:
    int id;
    string name;
    string team;
    int GP;
    double MIN;
    double PTS;
    double FG_PERC;
    double THREE_P_PERC;
    double FT_PERC;
    double REB;
    double AST;
    double STL;
    double BLK;
    ifstream file_csv;
    ofstream file_txt;

    Player()
    {
       file_csv.open("..\\test.txt");

        string a,b,c,temp,d,f,g;
        file_csv>>temp;
        replace(temp.begin(), temp.end(), ',', ' ');
        cout<<temp<<endl;
        stringstream s(temp);
        s>>d>>f>>g;
        cout<<d<<f<<g<<endl;
        file_csv.close();


    }




    int getId() const {
        return id;
    }

    void setId(int id) {
        Player::id = id;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Player::name = name;
    }

    const string &getTeam() const {
        return team;
    }

    void setTeam(const string &team) {
        Player::team = team;
    }

    int getGp() const {
        return GP;
    }

    void setGp(int gp) {
        GP = gp;
    }

    double getMin() const {
        return MIN;
    }

    void setMin(double min) {
        MIN = min;
    }

    double getPts() const {
        return PTS;
    }

    void setPts(double pts) {
        PTS = pts;
    }

    double getFgPerc() const {
        return FG_PERC;
    }

    void setFgPerc(double fgPerc) {
        FG_PERC = fgPerc;
    }

    double getThreePPerc() const {
        return THREE_P_PERC;
    }

    void setThreePPerc(double threePPerc) {
        THREE_P_PERC = threePPerc;
    }

    double getFtPerc() const {
        return FT_PERC;
    }

    void setFtPerc(double ftPerc) {
        FT_PERC = ftPerc;
    }

    double getAst() const {
        return AST;
    }

    void setAst(double ast) {
        AST = ast;
    }

    double getReb() const {
        return REB;
    }

    void setReb(double reb) {
        REB = reb;
    }

    double getStl() const {
        return STL;
    }

    void setStl(double stl) {
        STL = stl;
    }

    double getBlk() const {
        return BLK;
    }

    void setBlk(double blk) {
        BLK = blk;
    }


    void New_data(vector<string> target) {
        file_txt.open("NBA_2024_stats.txt",ios::app);
        file_csv.open("..\\NBA_2024_stats.csv");
        if(!file_txt)
        {

        string fetch = "";
        cout<<"hello";

           while (!file_csv.eof())
           {

               getline(file_csv,fetch);
               file_txt << fetch<<endl;
               fetch = "";
           }

        file_csv.close();
        }

            for (int i = 0; i <target.size(); i++)
            {
                if(i!=target.size()-1)
                {
                file_txt << target[i]<<",";
                }
                else
                {
                    file_txt << target[i];
                }
            }
            file_txt<<endl;

            file_txt.close();

    }

    string toString()
    {
        string result="hi";

        return result;
    }




};