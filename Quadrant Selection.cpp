/* Quadrant Selection */

// A common problem in mathematics is to determine which quadrant a given point lies in. 
// For example, the point A, which is at coordinates (12, 5) lies in quadrant 1 since both its x and y values are positive, 
// and point B lies in quadrant 2 since its x value is negative and its y value is positive.
// Your job is to take a point and determine the quadrant it is in. You can assume that neither of the two coordinates will be 0.

// Output the quadrant number (1, 2, 3 or 4) for the point (x, y).

#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    cin >> x;
    cin >> y;
    
    if (x > 0 and y > 0) {
        cout << "Quadrant 1" << endl;
    }
    else if (x < 0 and y > 0) {
        cout << "Quadrant 2" << endl;
    }
    else if (x < 0 and y < 0) {
        cout << "Quadrant 3" << endl;
    }
    else {
        cout << "Quadrant 4" << endl;
    }
    return 0;
}



