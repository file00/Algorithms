/* Alarm Clock */
// Setting the alarm 45 minutes early
#include <iostream>
using namespace std;

int main() {
    int H, M;
    
    cin >> H >> M;
    
    if (H >= 1 and M < 45) {
        cout << H-1 << " " << M+15 << endl;
    }
    else if (H == 0 and M < 45) {
        cout << H+23 << " " << M+15 << endl;
    }
    else {
        cout << H << " " << M-45 << endl;
    }
    return 0;
}


