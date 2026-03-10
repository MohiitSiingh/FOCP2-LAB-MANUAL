/* Q7. A game compares three players' scores to find who is ahead.
 Implement a solution to accept three scores
and identify the winner. */
#include<iostream>
using namespace std;
int main(){

int players;
cout<<"enter : ";
cin>>players;
float score[players];
for(int i=0 ; i < players ; i++){
cout<<"player "<<i<<" :";
cin>>score[i];
}
float highest = score[0];
int highestplayer;
for(int i = 0; i<players; i++){  

if (score[i]>highest){
    highest = score[i];
    highestplayer = i;
}
//cout<<"player "<<i<<"has highest score"<<score[i];
}

cout<<"player "<<highestplayer<<"   has highest score: "<<highest;
    return 0;
}
