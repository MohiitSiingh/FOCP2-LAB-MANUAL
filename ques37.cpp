/* 
Q37. A registration system rejects usernames that contain spaces or special characters.
Write a C++ program to validate whether a given string can be accepted as a username.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    cout << "Enter username: ";
    cin >> username;

    bool valid = true;
    for (int i = 0; i < username.length(); i++) {
        char ch = username[i];
        if (!isalnum(ch)) { // not letter or digit
            valid = false;
            break;
        }
    }

    if (valid)
        cout << "Valid Username" << endl;
    else
        cout << "Invalid Username" << endl;

    return 0;
}