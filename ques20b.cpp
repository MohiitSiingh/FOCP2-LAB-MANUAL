// Q20. A board displays reverse seating layouts for events.
// Implement a solution to print:
// 54321
// 5432
// 543
// 54
// 5

#include <iostream>
using namespace std;

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 5; j >= i; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}