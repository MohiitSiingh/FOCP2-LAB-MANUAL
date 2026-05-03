


#include <iostream>
using namespace std;

bool booked[101][101];   // movie IDs up to 100, customer IDs up to 100
int countTickets[101];   // how many tickets booked for each movie

bool book(int customer, int movie) {
    if(booked[movie][customer]) return false;
    if(countTickets[movie] >= 100) return false;
    booked[movie][customer] = true;
    countTickets[movie]++;
    return true;
}

bool cancel(int customer, int movie) {
    if(!booked[movie][customer]) return false;
    booked[movie][customer] = false;
    countTickets[movie]--;
    return true;
}

bool isBooked(int customer, int movie) {
    return booked[movie][customer];
}

int availableTickets(int movie) {
    return 100 - countTickets[movie];
}
