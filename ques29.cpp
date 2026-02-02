#include<iostream>
int main(){
/*Q29. A weather monitoring app records 30-day temperature logs.
 Implement a solution to store daily 
temperatures in an array and display the minimum temperature for the month.*/
std::cout<<"Enter temperature: ";
float temp[30];
float min = temp[0] ;
for(int i=0; i<30 ; i++){
    std::cin>>temp[i];
    
}
for(int i=0; i<30;i++){
if(temp[i+1]<temp[0]){
    min = temp[i+1];
    }
}
std::cout<<"minimum temperatre recorded is: "<<min;
    return 0;
 }