/* Update the Contents of the Forward List */

#include <forward_list>
#include <iostream>

using namespace std;

int main() {

    forward_list<int> fwd_list = {1, 2, 5};
    
    cout << "Forward List before assign(): ";
    for (const int& element : fwd_list) {
        cout << element << " ";
    }
    
    // replace the entire content of the forward list
    // with new elements 3 and 4
    fwd_list.assign({3, 4});

    cout << "\nForward List after assign(): ";
    for (const int& element : fwd_list) {
        cout << element << " ";
    }
    cout << endl;
    
    return 0;    
}