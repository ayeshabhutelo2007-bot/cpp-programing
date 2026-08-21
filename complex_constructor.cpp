#include<iostream>
using namespace std;
class complex
{
private:
int real,imag;
public:
complex(int r=0,int i=0):real(r),imag(i){}
complex add(const complex &c)
{
return complex(real+c.real,imag+c.imag);
}
complex sub(const complex &c)
{
return complex(real-c.real,imag-c.imag);
}
void display() const
{
cout<<real<<"+"<<imag<<"i"<<endl;
}
};
int main()
{
complex c1(4,5),c2(8,9);
complex sum=c1.add(c2);
complex diff=c1.sub(c2);
cout<<"First Complex Number: ";
c1.display();
cout<<"Second Complex Number: ";
c2.display();
cout<<"Addition: ";
sum.display();
cout<<"Substraction: ";
diff.display();
return 0;
}
