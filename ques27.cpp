#include<iostream>
int main(){
/*Q27. A supermarket software maintains item price lists. Implement a solution to
 store the prices of 10
items in an array and display the maximum price*/
float price[10];
std::cout<<"enter price: ";
float max=price[0];
for(int i = 0 ; i<10 ; i++){
std::cin>>price[i];
}
for(int i = 0; i<10;i++){
    if (price[i+1]>price[0]){
        max = price[i+1];
    }
}
std::cout<<"max price is : "<<max;

    return 0;
}