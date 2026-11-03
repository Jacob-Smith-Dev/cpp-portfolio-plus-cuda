#include "includes.h"

using namespace std;

void print_pairs(vector<pair<int, int>> list_of_pairs) {
  for (const auto& pair : list_of_pairs) {
    cout << pair.first << " & " << pair.second << endl;
  }
}

void print_vector(vector<int> vec) {
  for (int elem : vec) {
    cout << "the first element is: " << elem << endl;
  }
}

int main() {
  //initialize vector with 5 elements, all 0''s
  std::vector<int> vec(5, 0);
  bool is_zero = true;
  //vec.emplace_back(1);
  for (int elem : vec) {
    if (elem != 0) {
      is_zero = false;
    }
  }
  print_vector(vec);
  std::cout << "the vector is initizlied with 5 zeros? : " << is_zero << std::endl;

  //M x N matrix
  int m = 10;
  int n = 5;
  std::vector<std::vector<int>> matrix(m, std::vector<int>(n, 1));
  //print the matrix:
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }

  std::cout << "======================================================" << std::endl;

  //vector of pairs
  std::vector<std::pair<int, int>> list;
  list.emplace_back(1,2);
  list.emplace_back(2,3);
  list.emplace_back(3,4);
  list.emplace_back(-1,-3);

  //print out the list using binding iteration:
  for (auto const& [x,y] : list) {
    std::cout << x << " & " << y << std::endl;
  }

  std::cout << "======================================================" << std::endl;

  //print out the list using range-based:
  for (const auto& pair : list) {
    std::cout << pair.first << " & " << pair.second << std::endl;
  }

  //sort list by the second element in descending value order
    //sort() is the standard function call on a vector to sort (based on introsort)-> takes 3 parameters
      //1. ptr to the first element
      //2. ptr to the last element
      //3. the class compare -> which tells the compiler how to execute the comparison according to a custom ruleset, the default is the standard <
    
    //for passing in integers, the standard < is fine; but what if the comparison is a pair<int, int> or a TreeNode struct? the function wont know how to perform the compaison
  std::sort(list.begin(), list.end(), [](const auto& a, const auto& b) {return a.second > a.first;});

  //print out the list using the function above:
  print_pairs(list);

  return 0;

  std::cout << "======================================================" << std::endl;

  /*
  Hash Maps and Sets
  */
}
