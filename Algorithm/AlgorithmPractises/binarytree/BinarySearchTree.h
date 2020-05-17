//
// Created by anarion on 6/21/19.
//

#ifndef ALGORITHMPRACTISES_BINARYSEARCHTREE_H
#define ALGORITHMPRACTISES_BINARYSEARCHTREE_H


#include "BinaryTree.h"

class BinarySearchTree : public BinaryTree {
public:
    explicit BinarySearchTree(TreeNode* root = nullptr);

    void push(long val);
    TreeNode* search(long val);
    void del(long val);
    static TreeNode* left_most(TreeNode* node);
    static TreeNode* right_most(TreeNode* node);
};


#endif //ALGORITHMPRACTISES_BINARYSEARCHTREE_H
