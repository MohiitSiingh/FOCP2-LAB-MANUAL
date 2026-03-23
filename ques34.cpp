/* 
Q34. A graphics rendering engine adds pixel intensity matrices.
Implement a solution to store two 3×3 matrices and compute their sum.
*/

#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], sum[3][3];

    cout << "Enter first 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "Enter second 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];

    cout << "Sum of matrices:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}