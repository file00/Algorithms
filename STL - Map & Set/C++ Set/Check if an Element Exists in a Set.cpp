/* Check if an Element Exists in a Set */
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
    
    // check if 40 exists
    int num = 40;
    if(my_set.count(num) == 1) {
        cout << num << " exists." << endl;
    } else {
        cout << num << " doesn't exist." << endl;
    }
    
    // check if 60 exists
    num = 60;
    if(my_set.count(num) == 1) {
        cout << num << " exists." << endl;
    } else {
        cout << num << " doesn't exist." << endl;
    }
    
    return 0;
}