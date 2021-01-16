//
//  node.cpp
//  Linked_list
//
//  Created by 최세린 on 2020/12/14.
//

#include "node.hpp"
#include <iostream>

node::node(const double &init_data, node *init_next)
{
    data = init_data;
    next = init_next;
}
void node::set_data(const double& new_data)
{
    this->data = new_data;
}
void node::set_link(node* new_link)
{
    this->next = new_link;
}

double node::get_data()
{
    return data;
}
node* node::get_next()
{
    return next;
}

void link::head_insert(node*& head_ptr, double data)
{
    head_ptr = new node(data, head_ptr);
}

void link::list_insert(node* previous_ptr, double data)
{
    node* new_node;
    new_node = new node(data, previous_ptr->get_next());
    previous_ptr->set_link(new_node);
}

void link::head_remove(node*& head_ptr)
{
    node* remove_ptr;
    remove_ptr = head_ptr;
    head_ptr = remove_ptr -> get_next();
    delete remove_ptr;
}
void link::list_remove(node* previous_ptr)
{
    node* remove_ptr;
    remove_ptr = previous_ptr -> get_next();
    previous_ptr -> set_link(remove_ptr -> get_next());
    delete remove_ptr;
}

void link::list_clear(node*& head_ptr)
{
    while(head_ptr != NULL)
        head_remove(head_ptr);
}

node* link::list_search(node* head_ptr, const double target)
{
    node* cursor;
    for(cursor = head_ptr;cursor != NULL;cursor = cursor->get_next())
        if(target == cursor->get_data())
            return cursor;
    return NULL;
}

void link::printData()
{
    node *tmpNode = head;
    
    while (tmpNode != NULL)
    {
        std::cout<<tmpNode->get_data()<<std::endl;
        tmpNode = tmpNode->get_next();
    }
}
