//
// Created by anarion on 6/21/19.
//

#include "BinaryTree.h"

BinaryTree::BinaryTree(TreeNode *root) : _root(root) {}

void BinaryTree::PreOrderPrint(TreeNode *node) {
    if (!node){
        return;
    }
    cout << node->get_val() << " ";
    PreOrderPrint(node->get_left());
    PreOrderPrint(node->get_right());
}

void BinaryTree::PostOrderPrint(TreeNode *node) {
    if (!node){
        return;
    }
    PostOrderPrint(node->get_left());
    PostOrderPrint(node->get_right());
    cout << node->get_val() << " ";
}

void BinaryTree::MidOrderPrint(TreeNode *node) {
    if (!node){
        return;
    }
    MidOrderPrint(node->get_left());
    cout << node->get_val() << " ";
    MidOrderPrint(node->get_right());
}

void BinaryTree::PreOrderPrint() {
    PreOrderPrint(_root);
}

void BinaryTree::PostOrderPrint() {
    PreOrderPrint(_root);
}

void BinaryTree::MidOrderPrint() {
    MidOrderPrint(_root);
}


