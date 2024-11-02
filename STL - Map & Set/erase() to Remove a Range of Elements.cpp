/* erase() to Remove a Range of Elements */
#include <iostream>
#include <map>
using namespace std;

int main() {
    
    // create a map named student
    map <int, string> student {{1, "Denise"}, {2, "Blake"}, {3, "Courtney"}, {4, "John"}, {5, "Jennifer"}};

    // create a map iterator
    map <int, string>::iterator iter;
    
    // display initial map values
    cout << "Initial Values:" << endl;
    for(iter = student.begin(); iter != student.end(); ++iter) {
        cout << iter->second << ", ";
    }
    
    cout << endl;
    
    // remove a range of elements
    student.erase(student.find(2),student.find(5));

    // display final map values
    cout << "\nFinal Values:" << endl;

    for(iter = student.begin(); iter != student.end(); ++iter) {
        cout << iter->second << ", ";
    }
    
    return 0;
}