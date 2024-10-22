/* Remove Elements from a Deque */

#include <iostream>
#include <deque>
using namespace std;

// function prototype for display_deque()
void display_deque(deque<int>);

int main() {

  deque<int> nums {1, 2, 3};
  
  cout << "Initial Deque: ";
  display_deque(nums);

  // remove element from the back
  nums.pop_back();
  
  cout << "\nDeque after pop_back(): ";
  display_deque(nums);
  
  // remove element from the front
  nums.pop_front();
  
  cout << "\nDeque after pop_front(): ";
  display_deque(nums);
  
  return 0;
}

// utility function to print deque elements
void display_deque(deque<int> dq){
  for (const int& num : dq) {
    cout << num << ", ";
  }
}