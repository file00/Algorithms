/* Access Elements from a Deque */

#include <iostream>
#include <deque>
using namespace std;

int main() {

  deque<int> nums {1, 2, 3};
  
  cout << "Front element: " << nums.front() << endl;
  cout << "Back element: " << nums.back() << endl;
  cout << "Element at index 1: " << nums.at(1) << endl;
  cout << "Element at index 0: " << nums[0];
  
  return 0;
}