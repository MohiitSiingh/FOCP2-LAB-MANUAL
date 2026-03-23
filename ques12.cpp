// Q12. A civil engineer classifies a triangle design as equilateral, isosceles, or scalene.
// Implement a solution to check the triangle type based on its sides.

#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;
    cout << "Enter three sides of triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "Equilateral Triangle" << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "Isosceles Triangle" << endl;
    } else {
        cout << "Scalene Triangle" << endl;
    }
    return 0;
}