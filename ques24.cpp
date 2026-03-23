// Q24. A typing practice app displays the alphabets in pyramid form.
// Implement a solution to display:
// A
// AB
// ABC
// ABCD
// ABCDE

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}