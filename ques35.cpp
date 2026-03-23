/* 
Q35. A data analytics tool flips rows and columns for better visualization.
Implement a solution to store a 3×3 matrix and compute its transpose.
*/

#include <iostream>
using namespace std;

int main() {
    int mat[3][3], trans[3][3];

    cout << "Enter a 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> mat[i][j];

    cout << "Transpose of matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            trans[i][j] = mat[j][i];
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}