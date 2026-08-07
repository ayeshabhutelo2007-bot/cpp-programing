#include<iostream>
using namespace std;
class circle
{
private:
float radius;
public:
void accept()
{
cout<<"Enter Radius:";
cin>>radius;
}
void calculate()
{
float area,circumference;
area=3.142*radius*radius;
circumference=2*3.142*radius;
cout<<"\n Area: "<<area<<endl;
cout<<"Circumference: "<<circumference<<endl;
}
};
int main()
{
circle c;
c.accept();
c.calculate();
return 0;
}
