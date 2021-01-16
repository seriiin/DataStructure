//
//  main.cpp
//  binaryHeap
//
//  Created by 최세린 on 2021/01/12.
//

#include <iostream>
#include <vector>
#include "heap.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    
    Heap heap = Heap();
    
    heap.heap_insert(1);
    heap.heap_insert(2);
    heap.heap_insert(20);
    heap.heap_insert(16);
    heap.heap_insert(22);
    
    heap.heap_print();
    
    cout<<endl;
    
    heap.heap_delete_max();
    heap.heap_print();
    return 0;
}
