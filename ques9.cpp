/*   Q9. A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a
solution to classify the symbol */
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= '0' && ch <= '9') {
        cout << ch << " is a Number." << endl;
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a Vowel." << endl;
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is a Consonant." << endl;
    }
    else {
        cout << ch << " is not a letter or number." << endl;
    }

    return 0;
}