/*Project Name : Final CS230 project
 * Author: Stavri Gkousi
 * Location: Greece
 * Email: 20220338@student.act.edu
 * Copyright: Full rights ownership available in authors repository,permisiion required.
 * */


#include <iostream>
#include<fstream>
#include <vector>
#include <sstream>
#include<string>
#include"Sort.h"
#include "Player.h" //Importing of all the necessary libraries
                    // The libraries with .h are my personal header files I have created




using namespace std;


#ifndef C___PROJECT_PLAYER_H
#define C___PROJECT_PLAYER_H

#endif //C___PROJECT_PLAYER_H
#include <iostream>
#include<string>
#include<sstream>
#include <algorithm>
#include<list>
#include "Player.h"



using namespace std;

int main()
{




int option(7); //create an int to hold the option inputetd by the user an put a deffault value of 7
                //incase the user just presses enter



    while (true) //infinite loop that stops only if user chooses option 7
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
        cout << "7) Exit the program" << endl; // Display of main menu
        cin>> option; //get user input
        if(option==1) // if user chooses option 1 the code below will be excecuted
        {
          Player play;  // creates a player object
          play.ShowData(true); // uses ShowData method which specifically displays the csv file
        }
        else if(option==2)
        {
            int PTS=0; // initialization of PTS
            cout<<"Please enter PTS values to get payers with equal or higher than the one you enter"<<endl; //Asks user for value to check
            cin>>PTS; //user input

          fstream file;
          file.open("..\\NBA_2024_stats.csv",ios::in); // we have created an fstream object and opened the csv file to read;
          string line,check,line2,thrower; // strings line and line2 to transfer data to stringstreams and thrower to get rid of first row because it has no values
          vector<string> row;// create vector row to hold the values
          file>>thrower;
          while(!file.eof()) //start a loop that stops if file has reached end
          {
             file>>line;//a whole row is transfered to the line variable
               stringstream transport(line);// transfer the contents of line to stringstream so to seperate by comma
               row.clear();
               while(!transport.fail())
               {
                   getline(transport,line2,','); // seperating the line from the file using comma as a delimiter
                   row.push_back(line2); //put the line2 which has a single word into the vector
               }


                  if (stoi(row[5]) >= PTS ) //checks if  the fifth element of the vector is the same or higher than the one we input
                  {

                     for(int i=0;i<row.size();i++) // if the condition is reached the whole vectors elements are displayed
                     {

                         cout<<row[i]<<" ";
                     }
                     cout<<endl;

                  }
                  else
                  {

                  }

          }
          file.close(); //closes the opened file
        }

        else if(option==3) //starts the option three code for excecution
        {
            vector<string>rookie; //create string vector
            string info,insert,answer; //create neccessary strings needed
            Player new_player; //creates new object Player

                cout << "Please enter players info(use space to seperate)"<<endl; //asks the user the info he wishes to input by seperating each value by space
                fflush(stdin); // used to clean input methods (needed because it fixed my code)
                getline(cin,info); //gets input,used because cin ignores space as end of input
                stringstream changer(info);// puts input data into stringstream
                fflush(stdin);
                while(getline(changer,insert,' ')) //tokenise the elements of stringstream using comma as a delimiter
                {
                    rookie.push_back(insert);//inserts string into vector
                }

                new_player.NewData(rookie);// calls NewData method with rookie as an argumment




        }
        else if(option==4) // starts option 4
        {
            Sort sort; //creates Sort object
            bool asc;
            cout<<"Do you want to go ascending or descending?[1/0]"<<endl;// as the user if he wants ascending or descending order
            cin>>asc;
            if(asc) // checks if the user wanted ascending or descending(true if ascending)
            {
                sort.BubbleSort(true); //starts BubbleSort method with ascending order
                sort.create_file(); // calls creat_file method to create the file and fill it with the values of each Player object in the vector
            }
            else // same code only in descending order
            {
                sort.BubbleSort(false);
                sort.create_file();
            }



        }
        else if(option==5) //starts option 5
        {
            ifstream file;
            file.open( "NBA_sorted_stats.txt"); //create fstream object in reading mode
            Player play; //creates Player object
            play.ShowData(false); // calls method to show the file created in method 4

        }
        else if(option==6)// starts method 6
        {

            Player play;//creates Player object
            play.FinalMethod();//calls method to create the file and add the new column of the table
        }
        else if(option==7) // starts method 7
        {
            cout<<"Goodbye";
            break; //method 7 is a way to stop the programm(not much here)
        }
        else
        {
            cout<<"Error you haven't given a number but something else, TERMINATING PROGRAM"; // created as an error message displayed if user put an invalid values
            break;
        }
   }
    return 0;
}
