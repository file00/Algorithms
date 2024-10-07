/* Using the empty and size method with std::array */
#include <iostream>
#include <array>
using namespace std;

int main(){
    array <int, 5> numbers = {1, 2, 3, 4, 5};

    cout << "The size of array is: " << numbers.size() << '\n';

    if(numbers.empty()){
        cout << "The array is empty";
    }
    else{
        cout << "The array is not empty";
    }
}