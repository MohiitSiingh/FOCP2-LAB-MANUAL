// Q11. A wholesale supplier applies 10% discount if the order > 1000 items.
// Implement a solution to compute total expenses and apply a discount accordingly.

#include <iostream>
using namespace std;

int main() {
    int items;
    float price, total;

    cout << "Enter number of items: ";
    cin >> items;
    cout << "Enter price per item: ";
    cin >> price;

    total = items * price;

    if (items > 1000) {
        total = total - (total * 0.10); 
    }

    cout << "Total expenses = " << total << endl;
    return 0;
}