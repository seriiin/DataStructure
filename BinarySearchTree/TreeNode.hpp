//
//  TreeNode.hpp
//  binarySearchTree
//
//  Created by 최세린 on 2021/01/03.
//

#ifndef TreeNode_h
#define TreeNode_h

class TreeNode{
public:
    TreeNode();
    TreeNode(int data);
    
    void setData(int data);
    void setLeft(TreeNode *left);
    void setRight(TreeNode *right);
    
    int getData(void);
    TreeNode *getLeft(void);
    TreeNode *getRight(void);
    
private:
    int data;
    TreeNode *left;
    TreeNode *right;
};

#endif /* TreeNode_h */
