/* Insert Elements to a Deque */

#include <iostream>
#include <deque>
using namespace std;

int main() {

  deque<int> nums {2, 3};

  cout << "Initial Deque: ";
  for (const int& num : nums) {
    cout << num << ", ";
  }
  
  // add integer 4 at the back
  nums.push_back(4);
   
  // add integer 1 at the front
  nums.push_front(1);
  
  cout << "\nFinal Deque: ";
  for (const int& num : nums) {
    cout << num << ", ";
  }
  
  return 0;
}