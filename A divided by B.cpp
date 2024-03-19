/* A/B */

// After receiving two integers A and B, write a program that outputs A/B.
// Input: A and B are given in the first row (0 < A, B < 10)
// Output: Output A/B on the first line. If the absolute or relative error between the actual correct answer and the output is '10^-9 or less', it is correct.
using namespace std;
#include <iostream>

int main() {
    double a, b;
    
    cin >> a >> b;
    
    cout.precision(9);
    cout << fixed;
    cout<< a / b;

    return 0;
}

// precision(n): Make sure to print only n digits of the real number. 
// fixed: After using fixed as a fixed-point notation, the number of digits below the decimal point is output as much as the n value received from cout.precision(n).
