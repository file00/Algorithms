/* C++ std::array */
// C++ program to demonstrate the usage of std::arrays

#include <iostream>
#include <array>

using namespace std;

int main(){
    // uniform initialization
    array <int , 5> numbers {1, 2, 3, 4, 5};

    cout << "The elements are: " << endl;

    // use a ranged for loop print the elements
    for(const int num: numbers){
        cout << num << " ";
    }
}