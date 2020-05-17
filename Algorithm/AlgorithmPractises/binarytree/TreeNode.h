//
// Created by anarion on 6/21/19.
//

#ifndef ALGORITHMPRACTISES_TREENODE_H
#define ALGORITHMPRACTISES_TREENODE_H


class TreeNode {
protected:
    TreeNode* _left;
    TreeNode* _right;
    long _val;
public:
    TreeNode(TreeNode* left, TreeNode* right, long val);
    virtual ~TreeNode() = default;

    TreeNode* get_left();
    TreeNode* get_right();
    void set_left(TreeNode* node);
    void set_right(TreeNode* node);
    long get_val();
    void set_val(long val);

};


#endif //ALGORITHMPRACTISES_TREENODE_H
