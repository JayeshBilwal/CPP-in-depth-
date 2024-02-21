//  Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
// and convert it into USD.

#include<iostream>
using namespace std;

int main(){
    float USD,INR;

    cout<<"Enter INR"<<endl;
    cin>>INR;

    USD = INR / 76.23;

    cout<<"The USD is: "<<USD;
}
