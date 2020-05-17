//
// Created by anarion on 6/12/19.
//

#include <cstddef>
#include "dynamic.h"

long fib(long n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    if (n == 2){
        return 1;
    }
    long a1 = 1, a2 = 1;
    for (size_t i = 0; i < n - 2; ++i){
        long t = a1;
        a1 += a2;
        a2 = t;
    }
    return a1;
}