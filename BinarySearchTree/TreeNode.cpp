//
//  main.cpp
//  binarySearchTree
//
//  Created by 최세린 on 2021/01/03.
//

#include <stddef.h>
#include "TreeNode.hpp"

TreeNode::TreeNode(){
    this->data = 0;
    this->left = NULL;
    this->right = NULL;
}

TreeNode::TreeNode(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
}

void TreeNode::setData(int data){this->data = data;}
void TreeNode::setLeft(TreeNode *left){this->left = left;}
void TreeNode::setRight(TreeNode *right){this->right = right;}

int TreeNode::getData(void){return data;}
TreeNode *TreeNode::getLeft(void){return this->left;}
TreeNode *TreeNode::getRight(void){return this->right;}
