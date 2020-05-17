//
// Created by anarion on 6/21/19.
//

#ifndef ALGORITHMPRACTISES_BINARYTREE_H
#define ALGORITHMPRACTISES_BINARYTREE_H

#include "TreeNode.h"
#include <iostream>
using namespace std;

class BinaryTree {
protected:
    TreeNode* _root;
public:
    explicit BinaryTree(TreeNode* root = nullptr);
    virtual ~BinaryTree() = default;

    void PreOrderPrint(TreeNode* node);
    void PreOrderPrint();
    void PostOrderPrint(TreeNode* node);
    void PostOrderPrint();
    void MidOrderPrint(TreeNode* node);
    void MidOrderPrint();
};


#endif //ALGORITHMPRACTISES_BINARYTREE_H
