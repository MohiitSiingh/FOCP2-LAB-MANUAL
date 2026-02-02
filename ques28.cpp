#include<iostream>
int main(){
/*Q28. A data processing system classifies even and odd inputs separately. 
Implement a solution to
store 5 elements in an array, compute sum of all even and sum of all odd numbers.*/
std::cout<<"enter number:  ";
int oddtotal=0,eventotal=0;
int num[5];
for(int i =0; i<5 ; i++){
std::cin>>num[i];
if(num[i]/2==0){
    eventotal= eventotal+num[i];
}
else{
    oddtotal=oddtotal+num[i];
}
}
std::cout<<"sum of odd:"<<oddtotal<<"sum of even: "<<eventotal;
    return 0 ;
}