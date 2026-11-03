#include <math.h>
#include <vector>
#include <iostream>
#include <utility>
#include <list>

/*
Implement vector and associated methods
*/
std::vector<int> new_vec(int size, int value) {
  std::vector<int> vec(size, value);
  return vec;
}

void print_vec(std::vector<int>& vec) {
  for (int num : vec) {
    std::cout << num << " " << std::endl;
  }
}

/*
Implement a doubly linked list
*/
class DoublyLinkedList {
private:
  struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
  };

  Node* head;
  Node* tail;

public:
  DoublyLinkedList() : head(nullptr), tail(nullptr) {}

  //insert a node at the front
  void insertAtFront(int val) {
    Node* newNode = new Node(val);
    if (!head) {
      head = tail = newNode;
      return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }
 
  //insert a node at the back
  void insertAtBack (int val) {
    Node* newNode = new Node(val);
    if (!head) {
      head = tail = newNode;
      return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
  }

  //delete a node from the front
  void deleteFrontNode() {
    if (!head) {return;} //list is empty, nothing to delete

    //create a temp variable to handle changing the head, need to keep track of next ptr
    Node* temp = head;
    head = head->next; //move start to second node

    //if head is NOT nullptr
    if (head) {
      head->prev = nullptr;
    } else { //the case where the node is the ONLY node left in the list
      tail = nullptr;
    }
    delete temp;
  }

  void deleteBackNode() {
    if (!head) {return;} //list is empty, nothing to delete

    Node* temp = tail;
    tail = tail->prev;

    if (tail) {
      tail->next = nullptr;
    } else { //if tail set itself to nullptr, set head to nullptr too
      head = nullptr;
    }
    delete temp;
  }

  void displayForward() {
    Node* temp = head;
    while (temp) {
      std::cout << temp->data << "<->";
      temp = temp->next;
    }
    std::cout << "nullptr\n";
  }

  void displayBackwards() {
    Node* temp = tail;
    while (temp) {
      std::cout << temp->data << "<->";
      temp = temp->prev;
    }
    std::cout << "nullptr\n";
  }

  //Destructor to clear the list
  ~DoublyLinkedList() {
    while (head) {
      deleteFrontNode();
    }
  }
};


/*
Custom hash map with collision detection
*/
//hashmap will consist of a number of buckets, with collisions handled by a prime number
class MyHashMap {
private:
//3 members: # of buckets, array of buckets, hash function: maps key to specific bucket index
  //# of buckets
  int numBuckets;

  //array of buckets:
    //each bucket is a doubly linked list (std::list) containing key-value pairs
  std::vector<std::list<std::pair<int,int>>> buckets;

  //hashing function:
  int getHash(int key) {
    return key % numBuckets;
  }

public:
  //constructor to initialize the vector with the specified number of empty lists
  MyHashMap() {
    numBuckets = 1009; //prime number for better distribution
    buckets.resize(numBuckets);
  }

  //insert/update a key-value pair
  void put(int key, int value) {
    int index = getHash(key);
    auto& chain = buckets[index]; //get the linked list at this bucket

    //traverse the linked list to see if the key is already in there
    for (auto& pair : chain) {
      if (pair.first == key) {
        pair.second = value; //if key exists, update the value
        return;
      }
    }

    //key does NOT exists, append a new pair to the back of the linked list
    chain.push_back({key, value});
  }

  //retreive a value by key, return -1 if not found
  int getValue(int key) {
    int index = getHash(key);
    auto& chain = buckets[index];

    for (auto& pair : chain) {
      if (pair.first == key) {
        return pair.second;
      }
    }

    //key not found, return -1
    return -1;
  }

  //remove a key-value pair
  void remove(int key) {
    int index = getHash(key);
    auto& chain = buckets[index];

    //instead of a range-based for loop, need to use an iterator since the erase() func requires an iterator as an arg
    for (auto it = chain.begin(); it != chain.end(); ++it) {
      if (it->first == key) {
        chain.erase(it);
        return;
      }
    }
  }
};

/*
Floyd's Algorithm - cycle detection, tortoise & hare
*/
struct ListNode{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
  //phase 1 & 2: detect cycle and find its starting node
  ListNode* detectCycle(ListNode* head) {
    if (!head || !head->next) {
      return nullptr; //list is empty or a single node cant have a cycle
    }

    ListNode* slow = head;
    ListNode* fast = head;

    //PHASE I: Find the intersection point
      //fast->next must also be checked to prevent a null ptr dereference
      //when fast tries to jump two steps.
    while (fast != nullptr && fast->next != nullptr) {
      slow = slow->next;        //move 1 step
      fast = fast->next->next;  //move 2 steps

      //if they collided, means a collision occured
      if (slow == fast) {

        //PHASE II: find the exact start of the loop:
          //reset one pointer to the head, keep the others at the collison point
        ListNode* seeker = head;

        //move both the seeker ptr and the slow ptr one step at a time till they collide, at the start of the loop
        while (seeker != slow) {
          seeker = seeker->next;
          slow = slow->next;
        }

        return seeker; //the node where the cycle begins
      }
    }

    return nullptr; //fast ptr reached the end of the list; no cycle detected
  }
};

int main() {
  //here will be the implementation of vector functions:
    //make a vector of 5 0's and use the vector funcs to get the relevant info
  std::vector<int> my_vec = new_vec(5, 0);
  print_vec(my_vec);
  std::cout << "There are " << my_vec.size() << " elements in the vector" << std::endl;

  return 0;
}