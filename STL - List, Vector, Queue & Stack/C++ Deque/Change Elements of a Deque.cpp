/* Change Elements of a Deque */

#include <iostream>
#include <deque>
using namespace std;

int main() {

  deque<int> nums = {1, 2};
  
  cout << "Initial Deque: ";

  for (const int& num : nums) {
    cout << num << ", ";
  }
  
  // change elements at the index
  nums.at(0) = 3;
  nums.at(1) = 4;
  
  cout << "\nUpdated Deque: ";

  for (const int& num : nums) {
    cout << num << ", ";
  }
  
  return 0;
}