#include<iostream>
using namespace std;

int main(){

    int radius;
    float PI = 3.14;

    cout<<"Enter Radius of the circle"<<endl;
    cin>>radius;

    double area = PI * radius * radius;

    cout<<"The area of the circle is: "<<area<<endl;

    return 0;
}