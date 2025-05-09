/* Access Keys and Values */
#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int, string> student;

    student[1] = "Jacqueline";
    student[2] = "Blake";
    student[3] = "Denise";
    student[4] = "Aaron";

    // declare map iterator
    map<int, string>::iterator iter;

    // use iterator to display map elements
    for (iter = student.begin(); iter != student.end(); ++iter) {
        cout << iter->first << " - " << iter->second << endl;
    }

    return 0;  
}