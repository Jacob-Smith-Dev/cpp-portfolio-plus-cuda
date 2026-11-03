#include <math.h>
#include <vector>
#include <iostream>
#include <utility>
#include <list>

/*
Implement a Min-Heap from a Vector
*/
class MinHeap {
private:
  std::vector<int> heap;

  //helper functions for array indexing math
  int parent(int i) {return (i-1) / 2;}
  int leftChild(int i) {return 2 * i + 1;}
  int rightChild(int i) {return 2 * i + 2;}

  //function to bubble a newly inserted element UP the tree until the heap is properly ordered
  void heapifyUp(int i) {
    //while we are not at the root, and the current node is smaller than its parent
    while (i != 0 && heap[i] < heap[parent(i)]) {
      std::swap(heap[i], heap[parent(i)]);  //swap current node with parent
      i = parent(i);  //move up to the parent's index
    }
  }

  //function to sink a swapped element DOWN the tree until the heap is restored
  void heapifyDown(int i) {
    int smallest = i;
    int left = leftChild(i);
    int right = rightChild(i);
    int n = heap.size();

    //check if left child exists and is amller than the current node
    if (left < n && heap[right] < heap[smallest]) {
      smallest = left;
    }

    //check if right child exists and is smaller than the smallest found so far
    if (right < n && heap[right] < heap[smallest]) {
      smallest = right;
    }

    //if the smallest is not the parent, swap and recusively heapify down
    if (smallest != i) {
      std::swap(heap[i], heap[smallest]);
      heapifyDown(smallest);
    }
  }

public:
  void push(int key) {
    heap.push_back(key);        //1. add to the very end of the array
    heapifyUp(heap.size() - 1); //2. bubble it up to its correct position
  }

  void pop() {
    if (heap.empty()) {return;}
    heap[0] = heap.back();      //1. move the last element to the root
    heap.pop_back();            //2. erase the last element
    heapifyDown(0);             //3. sink the new root down to its correct position
  }

  int top() {
    if (heap.empty()) throw std::out_of_range("Heap is empty");
    return heap[0];
  }

};

/*
Using std::priority_queue with Custom Comparators
*/

int main() {

  return 0;
}