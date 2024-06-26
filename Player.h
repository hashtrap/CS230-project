//
// Created by Stavri Gkousi on 3/17/2024.
//full rights reseerved
//

#ifndef C___PROJECT_PLAYER_H
#define C___PROJECT_PLAYER_H

#include<iostream>
#include<string>
#include <fstream>
#include<vector> // neccessary libraries for the Player class

class Player { //creates the Player class
// i could have put using namespace but i didnt because i enjoyed it more like this
public: //create the neccessary object fields
     int id;
    static  int file_line;
    std::string name;
    std::string team;
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
    double NEW;

public:
    Player(); //declare constructor

    ~Player(); //declare deconstructor


    void FinalMethod(); // all neccessary methods needed by the object

    void CreateFile();

    void ShowData(bool original);

    void Upload();

    void NewData(std::vector<std::string> target);

    std::string Print();

    int getId() const; //below are the getter and setter methods

    void setId(int id);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getTeam() const;

    void setTeam(const std::string &team);

    int getGp() const;

    void setGp(int gp);

    double getMin() const;

    void setMin(double min);

    double getPts() const;

    void setPts(double pts);

    double getFgPerc() const;

    void setFgPerc(double fgPerc);

    double getThreePPerc() const;

    void setThreePPerc(double threePPerc);

    double getFtPerc() const;

    void setFtPerc(double ftPerc);

    double getReb() const;

    void setReb(double reb);

    double getAst() const;

    void setAst(double ast);

    double getStl() const;

    void setStl(double stl);

    double getBlk() const;

    void setBlk(double blk);


    void setNew();
};


#endif //C___PROJECT_PLAYER_H
