/* C++ STL Sorting Algorithm */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    // initialize vector of int type
    vector<int> numbers = {3, 2, 5, 1, 4};

    // sort vector elements in ascending order
    sort(numbers.begin(), numbers.end());

    // print the sorted  vector 
    for (int number : numbers) {
        cout << number << "  ";
    }
    
    return 0;    
}