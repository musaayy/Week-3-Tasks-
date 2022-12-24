#include<iostream>
using namespace std;
main()
{
float veg;
float fruit;
int vegkg;
int fruitkg;
float cveg;
float cfruit;
float total;
float ctotal;


cout<<"Enter vegetables weight=";
cin>>vegkg;
cout<<"Enter fruit weight=";
cin>>fruitkg;
cveg=vegkg*0.194;
cfruit=19.4*fruitkg;
total=cveg+cfruit;
cout<<"Total Rupees="<<total<<endl;
ctotal=total/1.94;
cout<<"Total coins will be="<<ctotal;
}