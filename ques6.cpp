/*Q6. An HR system needs to calculate employees’ net salaries, including a 
fixed 12% bonus for each worker.
Implement a solution to accept the number of employees and 
their basic salary. Compute bonus, net salary, and
display results.*/
#include <iostream>
using namespace std;

int main() {
    int Employees;
    cout << "Enter the number of employees: ";
    cin >> Employees;

    for (int i = 1; i <= Employees; i++) {
        double basicSalary, bonus, netSalary;

        cout << "\nEmployee " << i << ":\n";
        cout << "Enter basic salary: ";
        cin >> basicSalary;

     
        bonus = 0.12 * basicSalary;

    
        netSalary = basicSalary + bonus;

      
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus (12%): " << bonus << endl;
        cout << "Net Salary: " << netSalary << endl;
    }

    return 0;
}