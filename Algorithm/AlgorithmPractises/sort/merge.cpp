//
// Created by anarion on 6/21/19.
//
#include "sort.h"

vector<long>&& merge(const vector<long>& a1, const vector<long>&a2){
    if (a1.empty()){
        return move(vector<long>(a1));
    }
    if (a2.empty()){
        return move(vector<long>(a2));
    }
    size_t i = 0, j = 0;
    vector<long> res;
    while (i < a1.size() && j < a2.size()){
        if (a1[i] < a2[j]){
            res.push_back(a1[i++]);
        }else{
            res.push_back(a2[j++]);
        }
    }
    if (i < a1.size()){
        res.insert(res.end(), a1.begin() + i, a1.end());
    }else{
        res.insert(res.end(), a2.begin() + j, a2.end());
    }
    return move(res);
}

vector<long>&& merge_sort(const vector<long>& arr){
    if (arr.empty()){
        return move(vector<long>());
    }
    if (arr.size() == 1){
        return move(vector<long>(arr));
    }
    vector<long> a1(arr.begin(), arr.begin() + arr.size() / 2);
    vector<long> a2(arr.begin() + arr.size() / 2, arr.end());
    return move(merge(merge_sort(a1), merge_sort(a2)));
}
