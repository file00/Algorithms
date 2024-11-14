/* Delete Elements From a Set */

#include <iostream>     
#include <set>          
using namespace std;
   
int main () {

    set<int> my_set = {10, 20, 30, 40};
    
    // set before deletion
    cout << "The set before deletion: ";
    for (int i : my_set) {
        cout << i << "  ";
    }

    // delete values from the set
    my_set.erase(10);
    my_set.erase(20);
    
    // set after deletion
    cout << "\nThe set after deletion: ";
    for (int i : my_set) {
        cout << i << "  ";
    }

    // delete all elements from the set
    my_set.clear();

    // set after clearing all elements
    cout << "\nThe set after clearing all elements: ";
    for (int i : my_set) {
        cout << i << "  ";
    }
    
    return 0;
}