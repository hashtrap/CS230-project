/*
 * Created by Stavri Gkousi
 * Date:3/17/2024
 * Copyright: Full ownership no sharing allowed can be found on my personal repository
*/

#include "Sort.h"
#include "Player.h"
#include<vector>
#include<cstring>
#include<sstream>

Sort::Sort()
{
    for(int i=0;i<12;i++)
    {

        Player pl;
        pl.Upload();
        toSort.push_back(pl);
    }

}
void Sort:: create_file()
{
    for(int i=0;i<toSort.size();i++)
    {
        std::cout<<toSort[i].Print()<<std::endl;
        toSort[i].CreateFile();
    }

}
void Sort::BubbleSort(bool asc)
{
    Player obj;
    obj.ShowData(true);
    int option;
    std::cout<<"Please choose which option to sort(1-13)"<<std::endl;
    std::cin>>option;
   if(asc) {
       switch (option) {
           case 1:
               for (int i = 0; i < toSort.size() - 1; i++) {

                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getId() > toSort[j + 1].getId()) {

                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }

               break;
           case 2:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (std::strcmp(toSort[j].getName().c_str(), toSort[j + 1].getName().c_str()) > 0) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 3:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (std::strcmp(toSort[j].getTeam().c_str(), toSort[j + 1].getTeam().c_str()) > 0) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 4:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getGp() > toSort[j + 1].getGp()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 5:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getMin() > toSort[j + 1].getMin()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 6:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getPts() > toSort[j + 1].getPts()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 7:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getFgPerc() > toSort[j + 1].getFgPerc()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 8:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getThreePPerc() > toSort[j + 1].getThreePPerc()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 9:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getFtPerc() > toSort[j + 1].getFtPerc()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 10:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getReb() > toSort[j + 1].getReb()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 11:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getAst() > toSort[j + 1].getAst()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 12:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getStl() > toSort[j + 1].getStl()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 13:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getBlk() > toSort[j + 1].getBlk()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           default:
               std::cout << "Option invalid,Terminating";
               break;


       }
   }
   else
   {
       switch (option) {
           case 1:
               for (int i = 0; i < toSort.size() - 1; i++) {

                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getId() < toSort[j + 1].getId()) {

                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }

               break;
           case 2:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (std::strcmp(toSort[j].getName().c_str(), toSort[j + 1].getName().c_str()) < 0) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 3:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (std::strcmp(toSort[j].getTeam().c_str(), toSort[j + 1].getTeam().c_str()) < 0) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 4:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getGp() <toSort[j + 1].getGp()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 5:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getMin() < toSort[j + 1].getMin()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 6:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getPts() < toSort[j + 1].getPts()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 7:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getFgPerc() < toSort[j + 1].getFgPerc()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 8:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getThreePPerc() < toSort[j + 1].getThreePPerc()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 9:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getFtPerc() < toSort[j + 1].getFtPerc()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 10:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getReb() < toSort[j + 1].getReb()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 11:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getAst() < toSort[j + 1].getAst()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 12:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getStl() < toSort[j + 1].getStl()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           case 13:
               for (int i = 0; i < toSort.size() - 1; i++) {
                   for (int j = 0; j < toSort.size() - i - 1; j++) {
                       if (toSort[j].getBlk() < toSort[j + 1].getBlk()) {
                           std::swap(toSort[j], toSort[j + 1]);
                       }
                   }
               }
               break;
           default:
               std::cout << "Option invalid,Terminating";
               break;


       }
   }
}

const std::vector<Player> &Sort::getToSort() const {
    return toSort;
}

void Sort::setToSort(const std::vector<Player> &toSort) {
    Sort::toSort = toSort;
}


