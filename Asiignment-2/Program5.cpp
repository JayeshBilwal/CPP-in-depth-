// 5. Write a program to input a three digit number and display the sum of the digits.

#include<iostream>
using namespace std;

int main(){

    int num,sum;

    cout<<"Enter a three digit number"<<endl;
    cin>>num;

    sum =  num % 10;
    num =  num / 10;
    sum += num % 10;
    num =  num / 10;
    sum += num % 10;
   
    cout<<"The sum of the digits is: "<<sum;

return 0;

}