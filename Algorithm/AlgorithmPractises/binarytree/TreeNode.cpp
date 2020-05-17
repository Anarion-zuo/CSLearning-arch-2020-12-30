//
// Created by anarion on 6/21/19.
//

#include "TreeNode.h"

TreeNode::TreeNode(TreeNode *left, TreeNode *right, long val) : _left(left), _right(right), _val(val) {}

TreeNode *TreeNode::get_left() {
    return _left;
}

TreeNode *TreeNode::get_right() {
    return _right;
}

void TreeNode::set_left(TreeNode *node) {
    _left = node;
}

void TreeNode::set_right(TreeNode *node) {
    _right = node;
}

long TreeNode::get_val() {
    return _val;
}

void TreeNode::set_val(long val) {
    _val = val;
}
