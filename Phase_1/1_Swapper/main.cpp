//write a function void swapNumbers(int* a, int* b) that takes two pointers and swaps their values

#include <iostream>

void swapNumbers(int* a, int* b) {
  //to swap, need to temporarily store the value of a, set the value of a to the value of b, then set the value of b to the value of temp

  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){

  int a = 100;
  int b = 200;

  int* ptr_x = &a;
  int* ptr_y = &b;

  std::cout << "The value of a is " << a << " and the mem address of a is " << &a << std::endl;
  std::cout << "The value of b is " << b << " and the mem address of b is " << &b << std::endl;

  std::cout << "The value of ptr_x is " << ptr_x << std::endl;
  std::cout << "The value of ptr_y is " << ptr_y << std::endl;

  swapNumbers(ptr_x, ptr_y);

  std::cout << "The value of a is " << a << " and the mem address of a is " << &a << std::endl;
  std::cout << "The value of b is " << b << " and the mem address of b is " << &b << std::endl;

  std::cout << "The value of ptr_x is " << ptr_x << std::endl;
  std::cout << "The value of ptr_y is " << ptr_y << std::endl;

  return 0;
}