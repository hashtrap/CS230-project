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
            string line;
            fstream file("..\\NBA_2024_stats.csv",ios::in );
               while(file.eof()!=1)
                {

                    file>>line;

                    cout << line <<endl;
                    cout<<endl;


                }
               file.close();



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
                cout<<info<<endl;
                stringstream changer(info);
                fflush(stdin);
                while(getline(changer,insert,' '))
                {
                    rookie.push_back(insert);
                }

                new_player.New_data(rookie);




        }
        else if(option==4)
        {
            string sort_val="";
            cout<<"Please enter the value by which you will be sorting";
            cin>>sort_val;

        }
        else if(option==5)
        {

        }
        else if(option==6)
        {

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
