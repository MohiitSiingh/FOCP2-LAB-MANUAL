/* 
Q32. A stock market app tracks first and second highest stock values.
Implement a solution to find the largest and second largest number in an array of size 5.
*/

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int largest = arr[0], second = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << second << endl;
    return 0;
}