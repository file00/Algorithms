/* Remove Elements From a Multimap */
#include <iostream>
#include <map>
using namespace std;

// function prototype for display_multimap()
void display_multimap(const multimap<int, string> &);

int main() {

    multimap<int, string> student {
        {111, "John"},
        {132, "Mark"},
        {143, "Chris"},
        {143, "Christopher"}
    };
  
    cout << "Initial Multimap:" << endl;
    display_multimap(student);

    // remove element with key: 143  
    student.erase(143);
  
    cout << "\nMultimap After Erasing Key 143: " << endl;
    display_multimap(student);

    // remove all multimap elements
    student.clear();

    cout << "\nMultimap After Clearing: " << endl;
    display_multimap(student);

    return 0;
}

// function to print multimap elements
void display_multimap(const multimap<int, string> &umap){

    for(const auto& key_value: umap) {
        int key = key_value.first;
        string value = key_value.second;
    
        cout << key << " - " << value << endl;
    }
}
