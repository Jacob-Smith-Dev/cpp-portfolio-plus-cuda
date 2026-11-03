//create a struct IntVector, inside it, put two things: int* data (the pointer to the heap array) and int capacity (how many slots it has)
//write a function void initialize(IntVector* vec, int size) that allocates the memory and sets capacity

#include <iostream>

struct IntVector {
  int* data{nullptr};
  int capacity;
};

void initialize(IntVector* vec, int size) {
  vec->capacity = size;
  vec->data = new int[size];
}

int main() {
  //create the struct
  IntVector vector;
  int size;

  std::cout << "What is the size of the vector you want to create: " << std::endl;
  std::cin >> size;

  initialize(&vector, size);

  delete[] vector.data;
  vector.data = nullptr;

  return 0;
}