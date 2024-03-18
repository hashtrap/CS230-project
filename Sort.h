//
// Created by letme on 3/17/2024.
//

#ifndef C___PROJECT_SORT_H
#define C___PROJECT_SORT_H

#include<iostream>
#include<vector>
#include"Player.h"
class Sort
{
private:
    std::vector<Player> toSort;

public :
     Sort();

     Sort(bool from_file);

void BubbleSort(bool asc);

void InsertionSort();

void MergeSort();

    const std::vector<Player> &getToSort() const;

    void setToSort(const std::vector<Player> &toSort);

    void Print();
};


#endif //C___PROJECT_SORT_H
