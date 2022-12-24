#include<iostream>
using namespace std;
main()
{
float iv;
float acc;
int time;
float fv;


cout<<"Enter Initial Velocity=";
cin>>iv;
cout<<"Enter Acceleration=";
cin>> acc;
cout<<"Enter Time in Seconds=";
cin>> time;
fv=(acc*time)+iv;
cout<<"Final Velocity="<<fv;
}