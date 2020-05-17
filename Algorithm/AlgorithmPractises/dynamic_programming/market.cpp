//
// Created by anarion on 6/13/19.
//

#include <limits>
#include "dynamic.h"



long max_profit(const std::vector<long>& price){
    const size_t size = price.size();
    std::vector<long> min_price(size, 0);
    long res = 0;

    min_price[0] = std::numeric_limits<long>::max();
    for (size_t i = 1; i < size; ++i){
        min_price[i] = min(min_price[i - 1], price[i - 1]);
    }
    for (size_t i = 1; i < size; ++i){
        res = max(res, (price[i] - min_price[i]));
    }

    return res;
}