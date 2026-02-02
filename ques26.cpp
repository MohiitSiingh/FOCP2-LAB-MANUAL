#include<iostream>
int main(){
/*Q26. The school report card system stores subject marks for each student.
Implement a solution to accept marks in 5 subjects,
 compute the total and percentage, and display the result*/
 float sub[5];
 float total = 0;
 std::cout<<"Enter marks for subject: ";
 for(int i =0 ; i<5 ; i++){
    std::cin>>sub[i];
    total = total + sub[i];
 }
 //float total = sub[0] + sub[1] + sub[2] + sub[3] + sub[4];
 float percent = (total/500)*100;
 
    std::cout<<"total marks are"<<total<<std::endl<<"percentage is "<<percent;
 

    return 0;
}