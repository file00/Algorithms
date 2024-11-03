/* erase() to Remove Individual Elements */
#include <iostream>
#include <map>
using namespace std;

int main() {
    
    // create a map named student
    map <int, string> student {{1, "Denise"}, {2, "Blake"}, {3, "Courtney"}, {4, "John"}, {5, "Jennifer"}};
    
    // create map iterator
    map <int, string>::iterator itr;

    // display initial map values
    cout << "Initial Values:" << endl;

    for(itr = student.begin(); itr != student.end(); ++itr) {
        cout << itr->second << ", ";
    }
    
    cout << endl;
    
    // use itr iterator to point to the first map element
    itr = student.begin();

    // remove the first element
    student.erase(itr);

    // remove the element having key 4
    student.erase(4);

    // display final map values
    cout << "\nFinal Values:" << endl;

    for(itr = student.begin(); itr != student.end(); ++itr) {
        cout << itr->second << ", ";
    }
    
    return 0;
}