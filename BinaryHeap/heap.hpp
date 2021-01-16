//
//  heap.hpp
//  binaryHeap
//
//  Created by 최세린 on 2021/01/12.
//

#ifndef heap_hpp
#define heap_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class Heap{
    vector<int> heap;
public:
    Heap(){heap.push_back(0);}
    void heap_insert(int data);
    void heap_delete_max();
    void heap_print();
    void swap(int &num1, int &num2);
};

#endif /* heap_hpp */
