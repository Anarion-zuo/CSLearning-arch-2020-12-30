//
// Created by anarion on 6/21/19.
//

#include "sort.h"

void partition(vector<long>& arr, size_t l, size_t r){
    if (arr.empty() || l >= r){
        return;
    }
    size_t i = l, j = l + 1;
    long p = arr[l];
    while (j <= r){
        if (arr[j] < p){
            swap(arr[i++], arr[j]);
        }else{
            j++;
        }
    }
    partition(arr, l, i);
    partition(arr, i + 1, r);
}

void quick_sort(vector<long>& arr){
    if (arr.empty() || arr.size() == 1){
        return;
    }
    partition(arr, 0, arr.size()- 1);
}