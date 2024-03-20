//
// Created by letme on 3/17/2024.
//

#ifndef C___PROJECT_SORT_H
#define C___PROJECT_SORT_H

#include<iostream>
#include<vector>
#include"Player.h" // import all the neccessary libraries together with my Player class
class Sort // start Sort class
{
private:
    std::vector<Player> toSort; // declare private vector of Player

public :
     Sort(); // default constructor

     Sort(bool from_file); // polymorphism in the constructor

void BubbleSort(bool asc); // bubble sort method

void InsertionSort(); // unused methods because of time issues

void MergeSort(); //unused methods because of time issues

    const std::vector<Player> &getToSort() const; //getter and setter methods

    void setToSort(const std::vector<Player> &toSort);

    void create_file(); // method to create sorted list file
};


#endif //C___PROJECT_SORT_H
