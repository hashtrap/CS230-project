//
// Created by letme on 3/17/2024.
//

#ifndef C___PROJECT_PLAYER_H
#define C___PROJECT_PLAYER_H

#include<iostream>
#include<string>
#include <fstream>
#include<vector>

class Player {

public:
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

public:
    Player();

    ~Player();




    void ShowData();

    void Upload();

    void NewData(std::vector<std::string> target);

    std::string Print();

    int getId() const;

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


};


#endif //C___PROJECT_PLAYER_H
