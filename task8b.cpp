#include<iostream>
using namespace std;
main()
{
int no;
int out;
int a;
int a1;
int b;
int b1;
int c;
int c1;
int d;
int d1;

cout<<"Enter a Number";
cin>>no;
a=(no%10);
no=no/10;

b=no%10;
no=no/10;
c=no%10;
no=no/10;
d=no%10;

cout<<"output is="<<a+b+c+d;
}