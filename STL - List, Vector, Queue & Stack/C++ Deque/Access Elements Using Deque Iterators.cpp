/* Access Elements Using Deque Iterators */

#include <iostream>
#include <deque>
using namespace std;

int main() {

  deque<int> nums {1, 2, 3};
  
  // declare an iterator to deque
 deque<int>::iterator dq_iter;
  
  // make iterator point to first element
  dq_iter = nums.begin();
  
  // print value pointed by itertor using *
  int first_element = *dq_iter; 

  cout << "nums[0] = " << first_element << endl;
  
  // make iterator point to element at index 1
  dq_iter = nums.begin() + 1; 
  int element_index1 = *dq_iter; 

  cout << "nums[1] = " << element_index1 << endl;

  // make iterator point to last element
  dq_iter = nums.end() - 1; 
  int last_element = *dq_iter; 

  cout << "nums[2] = " << last_element;
  
  return 0;
}