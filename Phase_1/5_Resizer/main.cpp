//write a function void push_back(IntVector* vec, int newNumber)
  //implement the following logic if the array is full:
    //1. use new to create a brand new array that is twice as big
    //2. write a for loop to copy all the old numbers into the new array
    //3. add your newNumber to the end
    //4. use delete[] on the old, small array so it doesn't leak
    //5. point your vec->data to the new array

#include <iostream>

struct IntVector {
  int* data{nullptr};
  int capacity{0};
  int currentSize{0};
};


void initialize(IntVector* vec, int size) {
  vec->capacity = size;
  vec->data = new int[size];
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

    // if (vec->capacity == 0) {
    //   int newSize = 1;
    // } else {
    //   int newSize = 2 * vec->capacity;
    // }
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

int main() {
  IntVector myVec;
  int size{0};

  std::cout << "What is the size of the vector you want to create: " << std::endl;
  std::cin >> size;

  initialize(&myVec, size);

  push_back(&myVec, 10);

  std::cout << "the vector's data is [";
  for (int i = 0; i < myVec.currentSize; i++) {
    std::cout <<  myVec.data[i];
  }
  std::cout << "]";

  delete[] myVec.data;

  return 0;
}