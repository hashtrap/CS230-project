/*Project Name : Final CS230 project
 * Author: Stavri Gkousi
 * Location: Greece
 * Email: 20220338@student.act.edu
 * Copyright: this is a open source project found on my personal git repository
 * */


#include <iostream>
#include<fstream>
#include <vector>
#include <sstream>
#include<string>
#include "Player.h"




using namespace std;
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
#include<list>
#include "Player.h"
#include"Sort.h"


using namespace std;

int main()
{




int option(7);



    while (true)
    {
        cout << "=========================================================================" << endl;
        cout << "USER MENU: TOP SCORER BASKETBALL STATISTICS FROM THE 2023-2024 NBA SEASON" << endl;
        cout << "=========================================================================" << endl;
        cout << "1) Read and display NBA stats for the top 12 players" << endl;
        cout << "2) Filter data by points scored per game" << endl;
        cout << "3) Enter data for an additional player" << endl;
        cout << "4) Sort the player records and save them into a new file" << endl;
        cout << "5) Display the sorted data" << endl;
        cout << "6) Calculate a new performance metric (NEW), display sorted data" << endl;
        cout << "7) Exit the program" << endl;
        cin>> option;
        if(option==1)
        {
          Player play;
          play.ShowData(true);
        }
        else if(option==2)
        {
            int PTS=0;
            cout<<"Please enter PTS values to get payers with equal or higher than the one you enter"<<endl;
            cin>>PTS;

          fstream file;
          file.open("..\\NBA_2024_stats.csv",ios::in);
          string line,check,line2,thrower;
          vector<string> row;
          file>>thrower;
          while(!file.eof())
          {
             file>>line;
               stringstream transport(line);
               row.clear();
               while(!transport.fail())
               {
                   getline(transport,line2,',');
                   row.push_back(line2);
               }


                  if (stoi(row[5]) >= PTS )
                  {

                     for(int i=0;i<row.size();i++)
                     {

                         cout<<row[i]<<" ";
                     }
                     cout<<endl;

                  }
                  else
                  {

                  }

          }
          file.close();
        }

        else if(option==3)
        {
            vector<string>rookie;
            string info,insert,answer;
            Player new_player;

                cout << "Please enter players info(use space to seperate)"<<endl;
                fflush(stdin);
                getline(cin,info);
                stringstream changer(info);
                fflush(stdin);
                while(getline(changer,insert,' '))
                {
                    rookie.push_back(insert);
                }

                new_player.NewData(rookie);




        }
        else if(option==4)
        {
            Sort sort;
            bool asc;
            cout<<"Do you want to go ascending or descending?[1/0]"<<endl;
            cin>>asc;
            if(asc)
            {
                sort.BubbleSort(true);
                sort.create_file();
            }
            else
            {
                sort.BubbleSort(false);
                sort.create_file();
            }



        }
        else if(option==5)
        {
            ifstream file;
            file.open( "NBA_sorted_stats.txt");
            Player play;
            play.ShowData(false);

        }
        else if(option==6)
        {

            Player play;
            play.FinalMethod();
        }
        else if(option==7)
        {
            cout<<"Goodbye";
            break;
        }
        else
        {
            cout<<"Error you haven't given a number but something else, TERMINATING PROGRAM";
            break;
        }
   }
    return 0;
}
