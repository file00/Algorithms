/* C++ Multimap */
#include <iostream>
#include <map>
using namespace std;

int main() {

    // create a multimap
    multimap<int, string> my_multimap = {
        {1, "Un"},
        {1, "One"},
        {2, "Two"},
        {2, "Dos"},
        {1, "Uno"},
        {2, "Deux"}
    };

    cout << "Key - Value" << endl;

    // loop across the multimap
    // display the key-value pairs
    for(const auto& key_value: my_multimap) {
        int key = key_value.first;
        string value = key_value.second;

        cout << key << " - " << value << endl;
  }

    return 0;
}