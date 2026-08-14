#include<iostream>
using namespace std;
class complex
{
public:
int r1,r2,i1,i2;
void get()
{
cout<<"Enter the complex number:";
cin>>r1>>i1;
cout<<"Enter the complex number:";
cin>>r2>>i2;
}
void add()
{
cout<<"Addition = "<<r1+r1<<"+"<<i1+i2<<"i"<<endl;
}
void sub()
{
cout<<"Substraction = "<<r1-r1<<"-"<<i1-i2<<"i"<<endl;
}
};
int main()
{
complex c;
c.get();
c.add();
c.sub();
return 0;
}




