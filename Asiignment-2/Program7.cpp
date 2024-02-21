// Write a program to check whether the given number is even or odd using a bitwise
//operator.

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter a number"<<endl;
    cin>>num;

    num&1==1 ? cout<<"odd number":cout<<"Even Number ";
}
