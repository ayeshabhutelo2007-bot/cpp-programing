#include<iostream>
using namespace std;
class greatest
{
private:
int a,b;
public:
void accept()
{
cout<<"Enter two numbers:";
cin>>a>>b;
}
void findgreatest()
{
if(a>b)
cout<<"Greatest Number: "<<a<<endl;
else if(b>a)
cout<<"Greatest Number: "<<b<<endl;
else
cout<<"Both numbers are equal "<<endl;
}
};
int main()
{
greatest g;
g.accept();
g.findgreatest();
return 0;
}
