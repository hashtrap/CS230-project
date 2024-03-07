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
        cout << "7) Calculate a new performance metric (NEW), display sorted data" << endl;
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
          double PTS=0;
          cout<<"Please enter PTS values for comparison(equal or higher)"<<"\n";
          cin>>PTS;


           vector<string> record ;
            string line2,temp;
            int checker=0;
            string values [12];
            fstream file("..\\NBA_2024_stats.csv",ios::in );
            while(!file.eof())
            {

                file>>line2;

                record.push_back(line2);

            }
            for(int i=0;i<record.size();i++)
            {
                   stringstream s;
                   s>>record[i];

                   while (!s.eof())
                   {
                    getline(record[i], temp, ',');
                    values[checker] = temp;



                    checker++;

                   }
                stringstream ss;
                double pts = 0;
                ss >> values[5];
                //cout<<"stop";
                ss << pts;
                cout<<pts;
                if (pts >= PTS)
                {
                    for (int i = 0; i < (sizeof(values) / sizeof(values[0])); i++)
                    {
                        cout << values[i] << " , ";
                    }
                }

                else
                {
                    cout<<"no record found with bigger PTS"<<endl;
                }
              }
        }
        else if(option==3)
        {

        }
        else if(option==4)
        {

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
