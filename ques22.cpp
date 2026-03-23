// Q22. A jewelry design tool generates hollow diamond outlines for patterns.
// Implement a solution to display a hollow diamond pattern of '*'.

#include <iostream>
using namespace std;

int main() {
    int n = 5; // size  diamond

    // upper 
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // lower 
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}