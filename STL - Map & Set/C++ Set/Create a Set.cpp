/* Create a Set */

#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> my_set = {5, 3, 8, 1, 3};
    
    for(int val : my_set) {
        cout << val << " ";
    }

    return 0;
}