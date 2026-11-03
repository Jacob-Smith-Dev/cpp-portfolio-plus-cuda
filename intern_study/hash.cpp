#include "includes.h"

using namespace std;

void print_char_int_map(unordered_map<char, int>& map) {
  for (const auto& [letter, num] : map) {
    cout << letter << " : " << num << endl;
  }
}

void find_key_char_int_map(unordered_map<char, int>& map, char key) {
  if (map.find(key) != map.end()) {
    cout << key << " is found in the map!" << endl;
  } else {
    cout << key << " not found in map" << endl;
  }
}

int main() {

  //initialize a map:
  unordered_map<char, int> map;

  map['a'] = 2;
  map.insert({'b', 3});
  map.emplace('c', 4);

  print_char_int_map(map);

  find_key_char_int_map(map, 'a');
  find_key_char_int_map(map, 'd');

  unordered_set<int, int> set;
}