//delete old initialize function.
//Build the constructor inside the public section
//Drop the -> because the constructor is INSIDE the class, it already know who it belongs to
//Update main

#include <iostream>

class IntVector {
private:
  int* data{nullptr};
  int capacity{0};
  int currentSize{0};

public:
  //Remove the old initialize function:
  // void initialize(IntVector* vec, int size) {
  //   vec->capacity = size;
  //   vec->data = new int[size];
  // }

  //implement the constructor:
  IntVector(int initial_size) : capacity(initial_size) {
    data = new int[initial_size];
    std::cout << "New vector initialized with capacity: " << capacity << std::endl;
  }

  void push_back(IntVector* vec, int newNumber) {
    if (vec->currentSize < vec->capacity) {
      std::cout << "vector size has capacity for new number, inserting new number..." << std::endl;
      vec->data[vec->currentSize] = newNumber;
      vec->currentSize++;
    } else {
      std::cout << "vector size has no additional capacity for new number, creating new vector..." << std::endl;
      //create new array 2x as big
        //handle the case where the size is initially 0:
      int newSize = (vec->capacity == 0) ? 1 : 2 * vec->capacity;

      int* temp = new int[newSize];

      //copy old numbers into new array
      for (int i = 0; i < vec->capacity; i++) {
        temp[i] = vec->data[i];
      }

      //add new number to the end
      temp[vec->currentSize] = newNumber;
      vec->currentSize++;
      
      //delete old vector
      delete[] vec->data;
      
      //point vec->data to new vector
      vec->data = temp;
      vec->capacity = newSize;
      std::cout << "the new vector's size is " << newSize << std::endl;
    }
  }

  void print_info(IntVector* vec) {
  std::cout << "the vector's data is [";
  for (int i = 0; i < vec->currentSize; i++) {
    std::cout << vec->data[i];
  }
  std::cout << "]" << std::endl;
  }
};

int main() {
  int size{0};
  
  std::cout << "What is the size of the vector you want to create: " << std::endl;
  std::cin >> size;

  IntVector myVec(size);


  //myVec.initialize(&myVec, size);

  myVec.push_back(&myVec, 10);
  myVec.push_back(&myVec, 11);
  myVec.push_back(&myVec, 12);

  // std::cout << "the vector's data is [";
  // for (int i = 0; i < myVec.currentSize; i++) {
  //   std::cout <<  myVec.data[i];
  // }
  // std::cout << "]";

  //can no-longer access the private variable information of the vector class.
    //made a public function to do so instead
  myVec.print_info(&myVec);

  //the following operation is not possible anymore:
    //delete[] myVec.data;
  //now, need to implement a constructor/destructor to handle the memory aspects of things.

  return 0;
}