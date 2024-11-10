/* Add Values to a Set */
#include <iostream>     
#include <set>          
using namespace std;
   
int main () {

    set<int> my_set;

    // add values to the set
    my_set.insert(10);
    my_set.insert(30);
    my_set.insert(20);
    my_set.insert(50);
    my_set.insert(40);
    my_set.insert(50);
    
    // print the set elements
    for (int i : my_set) {
        cout << i << "  ";
    }
    
    return 0;
}