#include <iostream>
using namespace std;
class shape
{
public:
virtual void area(){
cout<<"Area of shape";
}
};
class square:public shape
{
private:
int sides;
public:
void area()override
{
cout<<"Enter any side:";
cin>>sides;
int a=sides*sides;
cout<<"Area of square "<<a<<endl;
}
};
class rectangle:public shape
{
private:
int length,breath;
public:
void area()override
{
cout<<"Enter length of Rectangle: ";
cin>>length;
cout<<"Enter breath of Rectangle: ";
cin>>breath;
int a=length*breath;
cout<<"Area of Rectangle "<<a<<endl;
}
};
class circle:public shape
{
private:
int radius;
public:
void area()override
{
cout<<"Enter the radius: ";
cin>>radius;
int pi=3.142;
int a=pi*radius*radius;
cout<<"Area of Circle "<<a<<endl;
}
};
int main()
{
square s;
rectangle r;
circle c;
s.area();
r.area();
c.area();
return 0;
}





