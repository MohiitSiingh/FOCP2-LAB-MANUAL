/* 
Q36. A machine learning model multiplies matrices for neural network layers.
Implement a solution to multiply two matrices of order mxn and pxq (if valid).
*/

#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;
    cout << "Enter rows and columns of second matrix: ";
    cin >> p >> q;

    if (n != p) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    int a[m][n], b[p][q], result[m][q];

    cout << "Enter first matrix:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            cin >> b[i][j];

    // multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result