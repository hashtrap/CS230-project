//
// Created by letme on 3/15/2024.
//

#ifndef C___PROJECT_SORTING_CLASS_H
#define C___PROJECT_SORTING_CLASS_H

#endif //C___PROJECT_SORTING_CLASS_H
#include<iostream>
#include <vector>
#include <string>

using namespace std;
class Sorting
{
private:
    std:: vector<std::string> sort;


    Sorting(std::vector<std::string> target)
    {
        sort=target;
    }

    Sorting(std:: string array[])
    {
        for(int i=0;i<*(&array + 1) - array;i++)
        {
            sort.push_back(array[i]);
        }
    }

public:
    const vector<std::string> &getSort() const {
        return sort;
    }

    void setSort(const vector<std::string> &sort) {
        Sorting::sort = sort;
    }


    void MergeSort(Sorting target)
    {
       vector<string> toSort=target.sort;
       
    }
};