#include<iostream>
using namespace std;
int main()
{
float charge;
float time;
float current;

cout<<"Enter charge(Q): ";
cin>> charge;

cout <<"Enter time(t): ";
cin>> time;

current = charge / time;
cout<<"The current is: "<<current<<endl;
}