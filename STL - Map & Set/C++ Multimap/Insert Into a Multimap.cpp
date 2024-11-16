/* Insert Into a Multimap */
#include <iostream>
#include <map>
using namespace std;

int main() {

    multimap<string, int> numbers;

    // insert a pair {"Odd", 1}
    numbers.insert({"Odd", 1});

    // insert multiple pairs
    numbers.insert({{"Even", 2}, {"Even", 6}, {"Odd", 5}, {"Even", 4}});

    cout << "Key - Value" << endl;

    // display numbers   
    for(const auto& key_value: numbers) {
        string key = key_value.first;
        int value = key_value.second;
        cout << key << " - " << value << endl;
    }

    return 0;
}