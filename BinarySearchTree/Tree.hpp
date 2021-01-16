//
//  Tree.h
//  binarySearchTree
//
//  Created by 최세린 on 2021/01/03.
//

#ifndef Tree_h
#define Tree_h

#include "TreeNode.hpp"

class Tree{
public:
    Tree();
    Tree(int data);
    
    void insert(int data);
    void display();
    bool search(int data);
    
private:
    void display(TreeNode *curNode);
    TreeNode *rootnode;
};

#endif /* Tree_h */
