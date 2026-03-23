// Q19. A network security system generates prime numbers in a range for encryption key pools.
// Implement a solution to find all prime numbers within a given range.

#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: ";

    for (int num = start; num <= end; num++) {
        if (num <= 1) continue;
        bool prime = true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}