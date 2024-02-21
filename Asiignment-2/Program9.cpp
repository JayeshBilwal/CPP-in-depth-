#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter a Number"<<endl;
    cin>>num;

    num = num / 10;
    num = num * 10;

    cout<<"After making the last digit 0: "<< num;
}