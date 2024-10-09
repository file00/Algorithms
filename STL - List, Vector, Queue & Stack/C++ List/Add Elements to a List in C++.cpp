/* Add Elements to a List in C++ */
#include <iostream>
#include <list>

using namespace std;

int main() {
    
    // create a list
    list<int> numbers = {1, 2, 3};
  
    // display the original list 
    cout << "Initial List: ";
    for(int number: numbers) {
        cout << number << ", ";
    }
  
    // add element at the beginning
    numbers.push_front(0);

    // add element at the end
    numbers.push_back(4);

    // display the modified list
    cout << endl << "Final List: ";
    for(int number : numbers) {
        cout << number << ", ";
    }

  return 0;

}