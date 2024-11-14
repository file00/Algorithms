/* C++ Set empty() and size() Methods */

#include <iostream>     
#include <set>          
using namespace std;
   
int main () {

    set<int> my_set = {10, 20, 30};

    // set before clear
    cout << "The set before clear: ";
    for (int i : my_set) {
        cout << i << "  ";
    }
    
    // check if the set is empty
    cout << "\nEmpty: " << my_set.empty() << endl;

    // check the size of the set
    cout << "Size: " << my_set.size() << endl;
    
    // clear values from the set
    my_set.clear();
    
    // set after clear
    cout << "\nThe set after clear: ";
    for (int i : my_set) {
        cout << i << "  ";
    }
    
    // use the capacity methods again
    cout << "\nEmpty: " << my_set.empty() << endl;
    cout << "Size: " << my_set.size() << endl;

    return 0;
}