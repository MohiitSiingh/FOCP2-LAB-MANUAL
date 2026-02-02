#include<iostream>
int main(){
    /*Q30. A payroll system maintains employee salary records.
     Implement a solution to accept salary of
10 employees in an array, compute total salary and average salary,
 then display the result*/
int salary[10];
int total=0,avg=0;
std::cout<<"enter salary: ";
for(int i =0 ; i<10;i++){
    std::cin>>salary[i];
    total+=salary[i];
}
avg = total/10;
std::cout<<"\n"<<total<<"\n"<<avg;
}