//write a function that uses the 'new' keywork to create a single integer on the Heap, assigns it the number 42, then returns a pointer to that int
  //in main(), print it out, and then use delete to clean it up

#include <iostream>

int* createHeapInt() {
  int* ptr = new int;
  *ptr = 42;
  return ptr;
}


int main() {

  //new always returns a pointer to the newly allocated memory space
    //therefore must have the pointer type
  int* var = createHeapInt();
  std::cout << "The memory address of the newly created int is " << var << std::endl;
  std::cout << "The value of the newly created int is " << *var << std::endl;

  
  delete var;
  var = nullptr;
  std::cout << "The memory address of the deleted int is " << var << std::endl;
  std::cout << "The value of the deleted int is " << *var << std::endl;

  return 0;
}