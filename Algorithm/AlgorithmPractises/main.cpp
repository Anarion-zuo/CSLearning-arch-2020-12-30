#include <iostream>

#include "dynamic_programming/dynamic.h"
#include "sort/sort.h"
#include "binarytree/BinarySearchTree.h"

int main() {
    vector<long> a({5,8,6,3,2,1,4,2,3,3,5,4,2,6});
    BinarySearchTree tree(nullptr);
    for (auto &i : a){
        tree.push(i);
    }
    tree.MidOrderPrint();
    auto i = 0;
}