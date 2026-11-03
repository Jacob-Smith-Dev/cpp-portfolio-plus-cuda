/*
This file will function as a template for practicing common C++ containers and related methods.
Complete each of the following tasks, utilizing the relevant stl functions.

Attempt to perform the following tasks completely from memory. If you get a compilation error, delete the file and start over.
Feel free to create any helper functions needed.
*/

//HELPER FUNCTIONS:


int main() {
  //===========================================================================================================================
  //
  //  1. PAIRS AND VECTORS
  //
  //===========================================================================================================================
  //Task 1.1 - Initialize a 1D vector with 5 elements, all initialized to 0.

  //Task 1.2 - Initialize a 2D grid of size M x N, initialized to 1. Bonus points if M and N are user inputs.

  //Task 1.3 - Create a vector of pairs of ints vector<pairs<int, int>> and push three coordinates to it using the curly brace {} syntax

  //Task 1.4 - Loop through the vector of paris using a range-based for loop and structured binding (feel free to look up syntax for structured binding)

  //Task 1.5 - Use std::sort() on the vector of paris with a lambda functions to sort by the second element descending (again, feel free to loop up lambda syntax for this)



  //===========================================================================================================================
  //
  //  2. HASH MAPS & SETS
  //
  //===========================================================================================================================
  //Task 2.1 - Create an unordered map where the key is a string and the value is an int

  //Task 2.2 - Use .find() to check if a specific string exists in the map without accidentially inserting it (compare against .end())

  //Task 2.3 - Loop through the map using strutured binding (do not look up syntax here) and print both sets of the pair

  //Task 2.4 - Create an unordered_set and insert five numbers

  //Task 2.5 - Write an if statement checking if the set .count(target) is greater than 0

  
  
  //===========================================================================================================================
  //
  //  3. STACKS & QUEUES
  //
  //===========================================================================================================================
  //Task 3.1 - Create a queue comprising ints, push a few nodes, access the front using .front(), and remove it using .pop()

  //Task 3.2 - Create a stack comprising ints, push the same nodes as 3.1, access the top using .top(), and remove it using .pop()
    //compare the front element to the queue -> how are they different?

  //Task 3.3 - Write a stnadard BFS/DFS loop that runs while (!structure.empty())


  //===========================================================================================================================
  //
  //  4. PRIORITY QUEUES (HEAPS)
  //
  //===========================================================================================================================
  //Task 4.1 - Initialize a default priority_queue

  //Task 4.2 - Initialize a min-heap for integers using priority_queue<int, vector<int>, greater<int>>

  //Task 4.3 - Push three unsorted numbers into the min-heap, access.top(), and then .pop() it


  //===========================================================================================================================
  //
  //  5. STRINGS AND ARRAYS
  //
  //===========================================================================================================================
  //Task 5.1 - Initialize a raw integer array int count[26] = {0} to track lowercase letter frequencies

  //Task 5.2 - Loop through a string and increment the correct index in your count array using c - 'a'

  //Task 5.3 - Extract a three-character substring starting at index 2 using str.substr(2, 3)



  //===========================================================================================================================
  //
  //  6. STRUCTS & POINTERS
  //
  //===========================================================================================================================
  //Task 6.1 - Write a TreeNode struct from scratch containing an int val and TreeNode* left, TreeNode* right

  //Task 6.2 - Add a basic constructure to the struct TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

  //Task 6.3 - Create a TreeNode* root = new TreeNode(5), access the value using the arrow operator root->val

  //Task 6.4 - Write a safe boundary check if (!root) or if (!root == nullptr)

  return 0;
}