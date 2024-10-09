/* Delete List Elements */
#include <iostream>
#include <list>

using namespace std;

int main() {
    // create a list
    list<int> numbers = {1, 2, 3, 4, 5};
 
    // display the original list 
    cout << "Inital List: ";
    for(int number : numbers) {
        cout << number << ",  ";
    }

    // remove the first element of the list
    numbers.pop_front();

    // remove the last element of the list
    numbers.pop_back();

    // display the modified list 
    cout << endl << "Final List: ";
    for(int number : numbers) {
        cout << number << ", ";
    }

    return 0;
}
