/* Q7. A game compares three players' scores to find who is ahead.
 Implement a solution to accept three scores
and identify the winner. */
#include<iostream>
using namespace std;
int main(){

int players;
cin>>players;
float score[players];
for(int i=0 ; i < players ; i++){
cout<<"player "<<i;
cin>>score[i];
}
for(int i = 0; i<players; i++){  
float highest = score[0];
if (score[i]>highest){
    highest = score[i];
}
cout<<"player "<<i<<"has highest score"<<score[i];
}

    return 0;
}