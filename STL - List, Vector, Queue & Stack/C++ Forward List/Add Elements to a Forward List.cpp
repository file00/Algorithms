/* Add Elements to a Forward List */

#include <forward_list>
#include <iostream>

using namespace std;

int main() {

    forward_list<int> fwd_list = {1, 2, 5};

    // add an element to the front
    fwd_list.push_front(2);

    cout << "Forward List after push_front(): ";
    for (const int& element : fwd_list) {
        cout << element << " ";
    }
    cout << endl;

    // point iterator to the 2nd position of the forward list
    auto itr = fwd_list.begin();
    advance(itr, 1);

    // insert element 7 at the 3rd position
    fwd_list.insert_after(itr, 7);

    cout << "Forward List after insert_after(): ";
    for (const int& element : fwd_list) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}