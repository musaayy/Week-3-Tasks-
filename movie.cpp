#include<iostream>
using namespace std;
main()
{
string movie;
int aprice;
int cprice;
int noa;
int noc;
float per;
float total;
float atotal;



cout<<"Enter Movie Name:";
cin>>movie;
cout<<"Enter ADULT ticket price=";
cin>>aprice;
cout<<"Enter CHILD ticket price=";
cin>>cprice;
cout<<"Enter NUMBER of ADULT TICKETS Sold=";
cin>>noa;
cout<<"Enter NUMBER of CHILD TICKETS Sold=";
cin>>noc;
cout<<"Enter Percentage to Donate=";
cin>> per;
total=(aprice*noa)+(cprice*noc);
cout<<"Total amount generated="<<total<<endl;
atotal=total-(total*per/100);

cout<<"Amount after donation="<<atotal;
}

