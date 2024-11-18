/* Check the Size of a Multimap */
#include <iostream>
#include <map>
using namespace std;

int main() {

    multimap<string, int> my_multimap;
    
    // check capacity before insertion
    string result = my_multimap.empty()? "Yes" : "No";
    int multimap_size =  my_multimap.size();

    cout << "Before Insertion";
    cout << "\nIs multimap empty? " << result << endl;
    cout << "multimap size: " << multimap_size << endl;
        
    // insert element
    my_multimap.insert({"apple",2});
    
    // check capacity after insertion
    result = my_multimap.empty()? "Yes" : "No";
    multimap_size = my_multimap.size();

    cout << "\nAfter Insertion" << endl;
    cout << "\nIs multimap empty? " << result << endl;
    cout << "multimap size: " << multimap_size << endl;
    
    return 0;
}
