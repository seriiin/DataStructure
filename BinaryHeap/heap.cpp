//
//  heap.cpp
//  binaryHeap
//
//  Created by 최세린 on 2021/01/12.
//

#include "heap.hpp"

void Heap::heap_insert(int data)
{
    int idx;
    int parent;
    
    heap.push_back(data);
    idx = heap.size() - 1;
    parent = idx/2;
    
    while(idx != 1 && data > heap[parent])
    {
        heap[idx] = heap[parent];
        heap[parent] = data;
        idx = parent;
        parent = idx/2;
    }
}

void Heap::heap_delete_max()
{
    int idx = 1;
    int left_child = idx * 2;
    int right_child = idx * 2 + 1;
    
    heap[idx] = heap[heap.size() - 1];
    heap.pop_back();
    
    while (right_child < heap.size() && (heap[idx] < heap[left_child] || heap[idx] < heap[right_child]))
    {
        int child;
        if (heap[idx] < heap[left_child])
            child = left_child;
        else child = right_child;
        
        swap(heap[idx], heap[child]);
        idx = child;
        left_child = idx * 2;
        right_child = idx * 2 + 1;
    }
}

void Heap::heap_print()
{
    for(int i = 1; i < heap.size(); i++)
        cout << heap[i] << endl;
    
}

void Heap::swap(int &num1, int &num2)
{
    int tmp;
    tmp = num1;
    num1 = num2;
    num2 = tmp;
}
