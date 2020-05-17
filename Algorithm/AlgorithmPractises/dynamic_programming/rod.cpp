//
// Created by anarion on 6/12/19.
//
#include "dynamic.h"

// input: gain of each length  n <= ls.size()
long rod(long n, const std::vector<long>& ls, std::vector<long>& store){
    if (n == 0){
        return 0;
    }
    if (store[n] != 0){
        return store[n];
    }
    long res = 0;
    for (size_t i = 1; i <= n / 2; ++i){
        if (store[i] == 0){
            store[i] = rod(i, ls, store);
        }
        if (store[n - i] == 0){
            store[n - i] = rod(n - i, ls, store);
        }
        res += store[i] + store[n - i];
    }
    res += ls[n];
    store[n] = res;
    return res;
}

long rod(long n, const std::vector<long>& ls){
    std::vector<long> store(ls.size(), 0);
    return rod(n, ls, store);
}
