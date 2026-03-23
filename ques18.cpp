// Q18. A String-matching tool validates if IDs are palindromes.
// Implement a solution to check whether a given ID is a palindrome.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string id;
    cout << "Enter ID: ";
    cin >> id;

    int start = 0, end = id.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (id[start] != id[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << id << " is a Palindrome" << endl;
    else
        cout << id << " is NOT a Palindrome" << endl;

    return 0;
}