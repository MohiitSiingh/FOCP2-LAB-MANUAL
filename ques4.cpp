#include<iostream>
int main(){
 /*Q4. A shopkeeper wants to calculate the total bill amount after applying a 20% 
 discount on the purchase.
Implement a solution to accept item no., quantity, and unit price.
 Compute the amount and apply 20% discount.
*/
int item,quantity,price;
float total;
std::cout<<"Enter: ";
std::cin>>item>>quantity>>price;
total=quantity*price;
std::cout<<"\ntotal is"<<total;
std::cout<<"\nafter discount: "<<0.8*total;
return 0;
}