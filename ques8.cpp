/* Q8. A monitoring system generates a sequence of numeric event IDs from 1 to N.
To make logs easier to analyse, the system applies tags to certain events based
 on predefined rules:
• Events whose ID is divisible by 3 are tagged as “Buzz”
• Events whose ID is divisible by 5 are tagged as “Fuzz”
• Events divisible by both 3 and 5 receive both tags*/
#include<iostream>
#include<string>
using namespace std;
int main (){
    int n;
    cout<<"enter number of IDs: ";
    cin>>n;
int eventIDs[n];
for(int i = 0 ; i<n ; i++){
    cout<<"Enter: "
    cin>>eventIDs[i];
    if(eventIDs[i]%3==0){
        cout<<"Buzz";
    }
else if(eventIDs[i]%5==0){
 cout<<"Fuzz";
}
else if(eventIDs[i]%5==0 && eventIDs[i]%3==0){
 cout<<"BuzzFuzz";
}
}

    return 0;
}