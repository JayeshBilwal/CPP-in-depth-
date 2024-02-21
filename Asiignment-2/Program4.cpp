// 4. Write a program to swap values of two int variables without using a third variable.

#include<iostream>
using namespace std;

int main(){
     int num1,num2;

     cout<<"Enter Two Numbers:"<<endl;
     cin>>num1>>num2;
    // Without third variable
     num1 = num1 + num2;
     num2 = num1 - num2;
     num1 = num1 - num2;

     cout<<"After Swapping the numbers is:"<<num1<<" "<<num2;
}