


#include <iostream>
using namespace std;

int balance[101];   // user IDs up to 100

bool create(int id, int amount) {
    if(balance[id] == 0) {   // new account
        balance[id] = amount;
        return true;
    } else {
        balance[id] += amount;
        return false;
    }
}

bool debit(int id, int amount) {
    if(balance[id] == 0 || balance[id] < amount) return false;
    balance[id] -= amount;
    return true;
}

bool credit(int id, int amount) {
    if(balance[id] == 0) return false;
    balance[id] += amount;
    return true;
}

int getBalance(int id) {
    if(balance[id] == 0) return -1;
    return balance[id];
}
