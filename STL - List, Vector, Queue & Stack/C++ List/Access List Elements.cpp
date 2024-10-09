/* Access List Elements */
#include <iostream>
#include <list>

using namespace std;

int main() {

    // create a list
    list<int> numbers = {1, 2, 3, 4, 5};
  
    // display the first element
    cout << "First Element: " << numbers.front() << endl;
  
    // display the last element
    cout << "Last Element: " << numbers.back();
  
    return 0;
    
}