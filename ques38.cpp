/* 
Q38. In software applications such as data analytics and probability systems, 
combinatorial values are frequently required. To ensure efficiency, developers 
avoid factorial-based solutions and use iterative logic with loops.
Implement a C++ program to generate Pascal's Triangle for a given number of rows.
*/

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int num = 1;
        // spacing for pyramid look
        for (int space = 0; space < rows - i; space++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}