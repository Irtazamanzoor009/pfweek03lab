#include<iostream>
using namespace std;
int main()
{
int megabytes;
int bits;

cout<<"Enter megabytes: ";
cin>> megabytes;

bits = megabytes * 1024 * 1024 * 8;
cout<<"Bits is: "<<bits<<endl;
}