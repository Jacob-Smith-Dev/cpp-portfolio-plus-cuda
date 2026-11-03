//ask the user for a number (e.g. 5)
//Use int* myArray = new int[num]; to create an array of that exact size on the heap
//fill it with a for loop, print it, and then use delete[] to destroy it

#include <iostream>

int main() {

  std::cout << "Please enter a number to create an array of that size: " << std::endl;
  int num = {0};
  std::cin >> num;

  //std::cout << num << std::endl;

  //create the array on the heap
  int* myArray = new int[num];

  //fill the array with some numbers
  for (int i = 0; i < num; i++) {
    myArray[i] = i;
  }

  //print the array
  for (int i = 0; i < num; i++) {
    std::cout << "The " << i << "th element of myArray is " << myArray[i] << std::endl;
  }
  
  delete[] myArray;

  return 0;
}