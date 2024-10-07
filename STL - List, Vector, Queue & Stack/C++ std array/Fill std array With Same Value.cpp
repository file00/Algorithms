/* Fill std::array With Same Value */
#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int, 5> a;

    // fill the array with zeros
    a.fill(0);
  
    cout << "The elements are: ";
    for(const int& elt: a){
        cout << elt << " ";
    }
}