// 3. Write a program to swap values of two int variables

#include<iostream>
using namespace std;

int main(){
    int num1,num2,temp;

    cout<<"Enter two number"<<endl;
    cin>>num1>>num2;
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"After swaping The numbers is:"<<num1<<" "<<num2<<endl;
}