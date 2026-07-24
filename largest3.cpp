#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter First Number:";
cin>>a;
cout<<"Enter Second Number:";
cin>>b;
cout<<"Enter Third Number:";
cin>>c;
if(a>b)
{
cout<<"Largest number is:"<<a<<endl;
}
else if (b>c)
{
cout<<"Largest number is:"<<b<<endl;
}
else
{
cout<<"Largest number is:"<<c<<endl;
}
return 0;
}
