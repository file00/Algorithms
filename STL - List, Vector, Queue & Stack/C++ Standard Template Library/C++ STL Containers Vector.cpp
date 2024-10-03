/* C++ STL Containers: Vector */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // create vector of int type
    vector<int> numbers {1, 2, 3, 4, 5};

    // print vector elements using ranged loop
    for (int number : numbers) {
        cout << number << "  ";
    }
    
    return 0;
}