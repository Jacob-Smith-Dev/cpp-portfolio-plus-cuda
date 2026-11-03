/*
This is the ultimate master template for C++ mastery. It covers standard data structures, 
algorithms, modern C++17/20 features, concurrency, advanced graph representations, and file I/O.

Attempt to perform the following tasks completely from memory. If you get a compilation error, 
delete the file and start over. 
*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <algorithm>
#include <numeric>
#include <deque>
#include <sstream>
#include <cctype>
#include <tuple>
#include <memory>
#include <cmath>
#include <bitset>
#include <fstream>
#include <optional>
#include <variant>
#include <thread>
#include <mutex>
#include <random>
#include <chrono>
#include <stdexcept>

using namespace std;

// =================================================================================================
// HELPER CLASSES, STRUCTS, AND TEMPLATES (Write these above main)
// =================================================================================================

// Task A - Write a custom generic template function 'swapValues(T& a, T& b)'

// Task B - Write a basic Disjoint Set Union (DSU / Union-Find) class with 'find' and 'union' methods

// Task C - Write a TrieNode struct containing a bool 'isWord' and an array/map of children pointers

// Task D - Write a Graph Node struct for an adjacency list or just define the type alias (e.g., using Graph = vector<vector<int>>;)


int main() {
  //===========================================================================================================================
  //
  //  1. PAIRS, TUPLES, AND VECTORS
  //
  //===========================================================================================================================
  //Task 1.1 - Initialize a 1D vector with 5 elements, all initialized to 0.

  //Task 1.2 - Create a vector of pairs and push three coordinates using {} syntax.

  //Task 1.3 - Loop through the vector of pairs using a range-based for loop and structured binding (auto& [x, y]).

  //Task 1.4 - Create a std::tuple containing an int, a double, and a string.

  //Task 1.5 - Access the second element of the tuple using std::get<1>(myTuple).

  //Task 1.6 - Unpack the tuple into three separate variables using structured binding (auto [a, b, c] = myTuple).

  //Task 1.7 - Insert elements from one vector to the end of another using vec.insert(vec.end(), other.begin(), other.end()).


  //===========================================================================================================================
  //
  //  2. 2D GRIDS AND MATRICES
  //
  //===========================================================================================================================
  //Task 2.1 - Initialize a 2D vector (grid) of size M x N, initialized to 1. 

  //Task 2.2 - Write a nested for-loop to iterate through every cell in the M x N grid.

  //Task 2.3 - Define a directions array: int dirs[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};

  //Task 2.4 - Write a safe boundary check for a row 'r' and col 'c' to ensure they are inside the grid bounds before accessing.


  //===========================================================================================================================
  //
  //  3. HASH MAPS & SETS
  //
  //===========================================================================================================================
  //Task 3.1 - Create an unordered_map where the key is a string and the value is an int.

  //Task 3.2 - Use .find() to check if a specific string exists in the map without accidentally inserting it (compare against .end()).

  //Task 3.3 - Loop through the map using structured binding and print both the key and the value.

  //Task 3.4 - Create an unordered_set and insert five numbers.

  //Task 3.5 - Write an if statement checking if the set .count(target) is greater than 0.

  //Task 3.6 - Erase an element safely from a map while iterating using the return value of .erase(it).


  //===========================================================================================================================
  //
  //  4. STACKS, QUEUES, & DEQUES
  //
  //===========================================================================================================================
  //Task 4.1 - Create a queue of ints, push a few nodes, access the front using .front(), and remove it using .pop().

  //Task 4.2 - Create a stack of ints, access the top using .top(), and remove it using .pop().

  //Task 4.3 - Write a standard BFS/DFS loop that runs while (!structure.empty()).

  //Task 4.4 - Initialize a deque of integers, push to the front and back, and pop from the front and back.


  //===========================================================================================================================
  //
  //  5. PRIORITY QUEUES (HEAPS)
  //
  //===========================================================================================================================
  //Task 5.1 - Initialize a default priority_queue (Max-Heap).

  //Task 5.2 - Initialize a min-heap for integers using priority_queue<int, vector<int>, greater<int>>.

  //Task 5.3 - Push three unsorted numbers into the min-heap, access .top(), and then .pop() it.

  //Task 5.4 - Initialize a priority_queue that stores pair<int, int>, providing a custom comparator struct or lambda (decltype).


  //===========================================================================================================================
  //
  //  6. STRINGS AND STRINGSTREAMS
  //
  //===========================================================================================================================
  //Task 6.1 - Extract a three-character substring starting at index 2 using str.substr(2, 3).

  //Task 6.2 - Convert an integer to a string using std::to_string(), and append it to an existing string using +=.

  //Task 6.3 - Convert a numeric string back to an integer using std::stoi() or std::stoll().

  //Task 6.4 - Use a std::stringstream to break a sentence string into individual words using a while(ss >> word) loop.

  //Task 6.5 - Use std::getline(ss, token, ',') to parse a CSV string.

  //Task 6.6 - Check if a character is alphanumeric using std::isalnum() and convert it to lowercase using std::tolower().


  //===========================================================================================================================
  //
  //  7. ALGORITHMS, ITERATORS, & LAMBDAS (<algorithm> & <numeric>)
  //
  //===========================================================================================================================
  //Task 7.1 - Reverse an entire vector in place using std::reverse().

  //Task 7.2 - Find the maximum element in a vector using std::max_element() and dereference the returned iterator.

  //Task 7.3 - Sum all elements in an integer vector using std::accumulate() (don't forget the initial value parameter!).

  //Task 7.4 - Use std::sort() on a vector of pairs with a custom lambda function to sort by the second element descending.

  //Task 7.5 - Use std::count_if() with a lambda capturing a local variable by reference `[&]` to count specific elements.

  //Task 7.6 - Use std::lower_bound() on a sorted vector to find the iterator of the first element >= a target.

  //Task 7.7 - Use std::distance(vec.begin(), it) to find the integer index of an iterator.

  //Task 7.8 - Use std::unique() followed by vec.erase() to remove duplicate consecutive elements from a sorted vector.


  //===========================================================================================================================
  //
  //  8. TWO POINTERS & BINARY SEARCH
  //
  //===========================================================================================================================
  //Task 8.1 - Set up a standard while(left < right) loop for a two-pointer array traversal.

  //Task 8.2 - Write a standard Binary Search template: while(left <= right), calculate mid safely (left + (right - left) / 2).


  //===========================================================================================================================
  //
  //  9. ADVANCED GRAPH TRAVERSAL & TREES
  //
  //===========================================================================================================================
  //Task 9.1 - Initialize an Adjacency List using an unordered_map<int, vector<int>> or vector<vector<int>>.

  //Task 9.2 - Write a standard topological sort setup: initialize an in-degree array and push nodes with 0 in-degree to a queue.

  //Task 9.3 - Create a dummy node on the Stack (ListNode dummy(0);) and a pointer traversing it for Linked List manipulation.


  //===========================================================================================================================
  //
  //  10. BIT MANIPULATION & MATH
  //
  //===========================================================================================================================
  //Task 10.1 - Check if a number is even or odd using the bitwise AND operator (num & 1).

  //Task 10.2 - Shift an integer left by 1 bit (equivalent to multiplying by 2) using <<.

  //Task 10.3 - Count the number of set bits (1s) in an integer using __builtin_popcount(num).

  //Task 10.4 - Find the greatest common divisor of two numbers using std::gcd(a, b).

  //Task 10.5 - Initialize a std::bitset<32> from an integer and print its binary representation.

  //Task 10.6 - Use bitwise XOR (^) to find the single non-repeating number in an array where every other number repeats twice.


  //===========================================================================================================================
  //
  //  11. MODERN C++ (C++17/20 FEATURES)
  //
  //===========================================================================================================================
  //Task 11.1 - Write a lambda function that returns std::optional<int> (return std::nullopt if a condition fails).

  //Task 11.2 - Use std::variant<int, string> to hold either an integer or a string, and check the type using std::holds_alternative.

  //Task 11.3 - (If compiler supports C++20) Use std::ranges::sort(vec) instead of std::sort(vec.begin(), vec.end()).


  //===========================================================================================================================
  //
  //  12. FILE I/O
  //
  //===========================================================================================================================
  //Task 12.1 - Open a file for writing using std::ofstream and output "Hello File" to it.

  //Task 12.2 - Open a file for reading using std::ifstream, read it line-by-line using std::getline(), and print to console.


  //===========================================================================================================================
  //
  //  13. CONCURRENCY & THREADING (Basics)
  //
  //===========================================================================================================================
  //Task 13.1 - Initialize a std::mutex.

  //Task 13.2 - Launch a std::thread that executes a lambda function.

  //Task 13.3 - Inside the thread lambda, use std::lock_guard<std::mutex> to safely lock the mutex and print a message.

  //Task 13.4 - Join the thread to the main thread using .join().


  //===========================================================================================================================
  //
  //  14. TIME & RANDOMIZATION
  //
  //===========================================================================================================================
  //Task 14.1 - Record a start time using auto start = std::chrono::high_resolution_clock::now().

  //Task 14.2 - Initialize a Mersenne Twister RNG: std::mt19937 gen(std::random_device{}()).

  //Task 14.3 - Create a std::uniform_int_distribution<int> dist(1, 100) and generate a random number.

  //Task 14.4 - Record an end time, calculate the duration in milliseconds, and print it.


  //===========================================================================================================================
  //
  //  15. EXCEPTION HANDLING
  //
  //===========================================================================================================================
  //Task 15.1 - Set up a try-catch block. 

  //Task 15.2 - Inside the 'try', throw a std::runtime_error("Custom error message").

  //Task 15.3 - Catch the exception as const std::exception& e and print e.what().


  //===========================================================================================================================
  //
  //  16. OOP, SMART POINTERS, & CONSTEXPR
  //
  //===========================================================================================================================
  //Task 16.1 - Create a std::unique_ptr<int> using std::make_unique<int>(5).

  //Task 16.2 - Transfer ownership of that unique_ptr to another unique_ptr using std::move().

  //Task 16.3 - Declare a 'constexpr int factorial(int n)' function above main and calculate factorial(5) at compile time.

  //Task 16.4 - Create a std::shared_ptr<int> and copy it to another shared_ptr to increment the reference count.

  return 0;
}