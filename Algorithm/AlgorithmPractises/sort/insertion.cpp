//
// Created by anarion on 6/21/19.
//

#include <cstdlib>
#include "sort.h"

void insert_sort(vector<long> arr){
    size_t i = 1, j = 1;
    while (j < arr.size()){
        while (arr[i] < arr[i - 1] && i != 0){
            swap(arr[i], arr[i - 1]);
            --i;
        }
        i = ++j;
    }
    while(1);
}