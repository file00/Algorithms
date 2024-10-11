/* Find the First Element of the Forward List */

#include <forward_list>
#include <iostream>

using namespace std;

int main() {

    forward_list<int> fwd_list = {1, 2, 3, 4, 5};

    // access the first element
    int first_element = fwd_list.front();

    cout << "The first element is: " << first_element;

    return 0;
}