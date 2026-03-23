/* 
Q40. A content-management system receives user-entered text that may contain inconsistent spacing, mixed cases, and invalid characters.
Develop a C++ program that:
1. Removes extra spaces
2. Converts to sentence case
3. Counts words, digits, special characters
4. Validates only alphabets, digits, spaces
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Remove extra spaces
    string cleaned = "";
    bool spaceFlag = false;
    for (int i = 0; i < input.length(); i++) {
        if (isspace(input[i])) {
            if (!spaceFlag) {
                cleaned += " ";
                spaceFlag = true;
            }
        } else {
            cleaned += input[i];
            spaceFlag = false;
        }
    }

    // Trim leading/trailing spaces
    if (cleaned[0] == ' ') cleaned.erase(0, 1);
    if (cleaned[cleaned.length()-1] == ' ') cleaned.erase(cleaned.length()-1);

    // Sentence case
    for (int i = 0; i < cleaned.length(); i++) {
        if (i == 0)
            cleaned[i] = toupper(cleaned[i]);
        else
            cleaned[i] = tolower(cleaned[i]);
    }

    // Count words, digits, special chars
    int words = 0, digits = 0, specials = 0;
    for (int i = 0; i < cleaned.length(); i++) {
        if (isdigit(cleaned[i])) digits++;
        else if (!isalnum(cleaned[i]) && !isspace(cleaned[i])) specials++;
    }

    // Word count
    for (int i = 0; i < cleaned.length(); i++) {
        if (cleaned[i] == ' ') words++;
    }
    words++; // last word

    cout << "Normalized string: " << cleaned << endl;
    cout << "Words = " << words << endl;
    cout << "Digits = " << digits << endl;
    cout << "Special characters = " << specials << endl;

    // Validation
    bool valid = true;
    for (int i = 0; i < cleaned.length(); i++) {
        if (!isalnum(cleaned[i]) && !isspace(cleaned[i])) {
            valid = false;
            break;
        }
    }

    if (valid)
        cout << "String is valid" << endl;
    else
        cout << "String contains invalid characters" << endl;

    return 0;
}