//
//  node.hpp
//  Linked_list
//
//  Created by 최세린 on 2020/12/14.
//

#ifndef node_hpp
#define node_hpp

#include <stdio.h>

class node
{
public:
    //생성자
    //인자가 들어오지않으면, data는 0으로, next는 NULL로 초기화
    node(const double &init_data = double(), node *init_next = NULL);
    void set_data(const double& new_data);
    void set_link(node* new_link);
    
    double get_data();
    node* get_next();
    
private:
    double data;
    node* next;
};

class link
{
public:
    node* head = NULL;
    
    void head_insert(node*& head_ptr, double data);
    void list_insert(node* previous_ptr, double data);
    void head_remove(node*& head_ptr);
    void list_remove(node* previous_ptr);
    void list_clear(node*& head_ptr);
    
    node* list_search(node* head_ptr, const double target);
    
    void printData();
};


#endif /* node_hpp */
