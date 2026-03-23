// Q20. A printing press needs to repeat labels in a fixed tabular layout.
// Implement a solution to display:
// 12345
// 12345
// 12345

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}