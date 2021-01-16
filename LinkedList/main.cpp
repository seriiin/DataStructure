//
//  main.cpp
//  Linked_list
//
//  Created by 최세린 on 2020/12/14.
//

#include "node.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    link link;
    link.head_insert(link.head, 1);
    link.head_insert(link.head, 2);
    link.head_insert(link.head, 3);
    link.head_insert(link.head, 4);
    link.printData();
    
    std::cout<<std::endl<<"insert_33_after_3"<<std::endl;
    node* tmp = link.list_search(link.head, 3);
    link.list_insert(tmp, 33);
    link.printData();
    
    std::cout<<std::endl<<"delete_33"<<std::endl;
    link.list_remove(tmp);
    link.printData();
    
    std::cout<<std::endl<<"delete_head"<<std::endl;
    link.head_remove(link.head);
    link.printData();


    std::cout<<std::endl<<"clear"<<std::endl;
    link.list_clear(link.head);
    link.printData();
}
