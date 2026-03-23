// Q15. A data analytics tool finds the maximum sales figure from multiple entries.
// Implement a solution to accept 'n' numbers and display the largest.

#include <iostream>
using namespace std;

int main() {
    int n, num, largest;
    cout << "Enter how many sales figures: ";
    cin >> n;

    cout << "Enter number 1: ";
    cin >> num;
    largest = num;

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num > largest) {
            largest = num;
        }
    }

    cout << "Maximum sales figure = " << largest << endl;
    return 0;
}