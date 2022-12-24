#include<iostream>
using namespace std;
main()
{
int size;
int cost;
float area;
int bcost;
float barea;

cout<<"Enter BAG size in Pounds=";
cin>>size;
cout<<"Enter cost of Bag=";
cin>>cost;
cout<<"Enter AREA covered by the Bag=";
cin>>area;

bcost=cost/size;
cout<<"Cost of the Fertilizer per POUND="<<bcost<<endl;
barea=cost/area;
cout<<"Cost of fertilizing the area per square feet="<<barea<<endl;
}