#include<iostream>
int main(){
/*Q29. A weather monitoring app records 30-day temperature logs.
 Implement a solution to store daily 
temperatures in an array and display the minimum temperature for the month.*/
std::cout<<"Enter temperature: ";
int temp[30];
int min = temp[0] ;
for(int i=0; i<30 ; i++){
    std::cin>>temp[i];
    
}
for(int i=1; i<30;i++){
if(temp[i]<min){
    min = temp[i];
    }
}
std::cout<<"minimum temperatre recorded is: "<<min;
    return 0;
 }