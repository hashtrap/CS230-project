//
// Created by letme on 13/03/2024.
//

#ifndef C___PROJECT_PLAYER_H
#define C___PROJECT_PLAYER_H

#endif //C___PROJECT_PLAYER_H
#include <iostream>
#include<string>

using namespace std;
class player
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

             player(int id1,string name1,string team1,int GP1,double MIN1,double PTS1,
                    double FG_PERC1,double THREE_P_PERC1,double FT_PERC1,double REB1,double AST1,double STL1,double BLK1 )
                   {
                       id=id1;
                       name=name1;
                       team=team1;
                       GP=GP1;
                       MIN=MIN1;
                       PTS=PTS1;
                       FG_PERC=FG_PERC1;
                       THREE_P_PERC=THREE_P_PERC1;
                       FT_PERC=FT_PERC1;
                       REB=REB1;
                       AST=AST1;
                       STL=STL1;
                       BLK=BLK1;


                   }

    int getId() const {
        return id;
    }

    void setId(int id) {
        player::id = id;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        player::name = name;
    }

    const string &getTeam() const {
        return team;
    }

    void setTeam(const string &team) {
        player::team = team;
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




};