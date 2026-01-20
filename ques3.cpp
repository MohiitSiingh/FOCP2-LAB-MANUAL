#include<iostream>
int main(){
/*Q3. A weather app developer needs to provide both Celsius and Fahrenheit readings. 
Implement a solution to 
convert Fahrenheit temperature into Centigrade or vice versa.*/
float f,c;
std::cout<<"Enter: ";
std::cin>>f>>c;
std::cout<<"in celsius it is: "<<(f-32)*5/9;
std::cout<<"\nin fahrenheit it is: "<<(c*9/5)+32;
return 0;
}