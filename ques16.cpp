// Q16. A cybersecurity tool verifies prime numbers used in encryption keys.
// Implement a solution to accept a number and check whether it is prime.

#include <iostream>
using namespace std;

int main() {
    int num, i, flag = 0;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is NOT prime" << endl;
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << num << " is Prime" << endl;
    else
        cout << num << " is NOT Prime" << endl;

    return 0;
}