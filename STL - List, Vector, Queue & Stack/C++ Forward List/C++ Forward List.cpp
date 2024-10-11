/* C++ Forward List */

#include <forward_list>
#include <iostream>
using namespace std;

int main() {

    forward_list<int> fwd_list = {1, 3, 2, 4, 5};

    // print the elements in the forward list
    for (const int& element : fwd_list) {
        cout << element << " ";
    }

    return 0;
}