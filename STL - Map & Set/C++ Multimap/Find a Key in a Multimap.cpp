/* Find a Key in a Multimap */
#include <iostream>
#include <map>
using namespace std;

int main() {

    multimap<string, int> my_multimap;

    my_multimap.insert({"apple", 5});
    my_multimap.insert({"banana", 3});
    my_multimap.insert({"apple", 2});
    my_multimap.insert({"cherry", 4});

    // find elements with the key "apple"
    string key_to_find = "apple";
    auto found = my_multimap.find(key_to_find);

    // print the found key
    if (found != my_multimap.end()) {
        cout << "Found key " << key_to_find << ": " << endl;
        cout << found->first << " - " << found->second << endl;
    }
    else {
        cout << "Key " << key_to_find << " not found." << endl;
    }

    return 0;
}