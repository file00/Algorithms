// leap Year
#include <iostream>
using namespace std;

int main() {
    int i;
    
    cin >> i;
    
    if (i % 4 == 0 and (i % 100 != 0 or i % 400 == 0)) {
        cout << "This year is Leap Year." << endl;
    }
    else {
        cout << "It's not a Leap Year this year." << endl;
    }
    return 0;
}

// Leap Year: It means the year in which February is 29 days, not 28 days.