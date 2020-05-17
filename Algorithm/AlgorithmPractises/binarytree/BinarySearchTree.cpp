//
// Created by anarion on 6/21/19.
//

#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree(TreeNode *root) : BinaryTree(root) {}

void BinarySearchTree::push(long val) {
    if (!_root){
        _root = new TreeNode(nullptr, nullptr, val);
        return;
    }
    TreeNode *last = nullptr, *node = _root;
    bool lr = false;
    while(node){
        last = node;
        if (val < node->get_val()){
            node = node->get_left();
            lr = false;
        } else{
            node = node->get_right();
            lr = true;
        }
    }
    if (lr){
        last->set_right(new TreeNode(nullptr, nullptr, val));
    }else{
        last->set_left(new TreeNode(nullptr, nullptr, val));
    }
}

void BinarySearchTree::del(long val) {
    TreeNode* node = _root, *parent = nullptr;
    while (node){
        if (val < node->get_val()){
            node = node->get_left();
        } else if (val > node->get_val()){
            node = node->get_right();
        } else{
            break;
        }
        parent = node;
    }
    if (!node){
        return;
    }
    if (!node->get_left() && !node->get_right()){
        if (node == parent->get_left()){
            parent->set_left(nullptr);
        } else{
            parent->set_right(nullptr);
        }
        delete node;
        return;
    }
    if (node->get_left()){
        auto most = right_most(node->get_left());
        if (node == _root){
            _root->set_val(most->get_val());
            delete most;

            return;
        }
        if (node == parent->get_left()){
            parent->set_left(nullptr);
        } else{

        }
    }

}

TreeNode *BinarySearchTree::search(long val) {
    TreeNode* node = _root;
    while (node){
        if (val < node->get_val()){
            node = node->get_left();
        } else if (val > node->get_val()){
            node = node->get_right();
        } else{
            return node;
        }
    }
    return nullptr;
}

TreeNode *BinarySearchTree::left_most(TreeNode *node) {
    if (!node){
        return nullptr;
    }
    while (node->get_left()){
        node = node->get_left();
    }
    return node;
}

TreeNode *BinarySearchTree::right_most(TreeNode *node) {
    if (!node){
        return nullptr;
    }
    while (node->get_right()){
        node = node->get_right();
    }
    return node;
}
