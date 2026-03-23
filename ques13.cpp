// Q13. A mathematics tool computes the exact roots of a quadratic equation.
// Implement a solution to calculate the roots of a quadratic equation.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d, root1, root2;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    d = (b * b) - (4 * a * c);

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different: " << root1 << " , " << root2 << endl;
    } else if (d == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and equal: " << root1 << endl;
    } else {
        cout << "Roots are imaginary" << endl;
    }
    return 0;
}