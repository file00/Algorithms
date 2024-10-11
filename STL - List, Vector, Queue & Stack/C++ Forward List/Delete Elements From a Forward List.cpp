/* Delete Elements From a Forward List */

#include <forward_list>
#include <iostream>

using namespace std;

int main() {

    forward_list<int> fwd_list = {1, 2, 3, 4, 3, 5};

    cout << "Original Forward List: ";
    for (const int& element : fwd_list) {
        cout << element << " ";
    }
    cout << endl;

    // remove the first element
    fwd_list.pop_front();

    cout << "Forward List after pop_front(): ";
    for (const int& element : fwd_list) {
        cout << element << " ";
    }
    cout << endl;

    // remove all occurrences of 3
    fwd_list.remove(3);

    cout << "Forward List after remove(3): ";
    for (const int& element : fwd_list) {
        cout << element << " ";
    }
    cout << endl;

    // remove all elements of the list
    fwd_list.clear();

    cout << "Forward List after clear(): ";
    for (const int& element : fwd_list) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}