// Q17. A learning application analyzes numbers for mathematical properties.
// Design a solution to check whether a given number is a Perfect number or an Armstrong number.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, sum = 0, i;
    cout << "Enter a number: ";
    cin >> num;

    // Check Perfect number
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num)
        cout << num << " is a Perfect number" << endl;
    else
        cout << num << " is NOT a Perfect number" << endl;

    // Check Armstrong number
    int temp = num, digits = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    int armstrongSum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        armstrongSum += pow(digit, digits);
        temp /= 10;
    }

    if (armstrongSum == num)
        cout << num << " is an Armstrong number" << endl;
    else
        cout << num << " is NOT an Armstrong number" << endl;

    return 0;
}