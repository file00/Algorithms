/* Modify and Access the Array Elements */
#include <iostream>
#include <array>

using namespace std;

int main(){
    array <int, 5> numbers = {1, 2, 3, 4, 5};

    // accessing using the [] operator
    cout << "First element: " << numbers[0] << '\n';

    // accessing using the at method
    cout << "Second element: " << numbers.at(1) << '\n';

    // modify the element at index 0
    numbers[0] = 8;

    cout << "Modifying first element: " << numbers[0] << '\n';

    // modify the element at index 1
    numbers.at(1) = 90;

    cout << "Modifying second element: " << numbers[1] << '\n';
}