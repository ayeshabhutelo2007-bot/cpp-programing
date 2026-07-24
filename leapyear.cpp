#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter the year:";
cin>>a;
if ((a%400==0)||(a%4==0 &&a%100!=0))
{
cout<<a<<"is a leap year";
}
else 
{
cout<<a<<"is a not leap year";
}
return 0;
}
