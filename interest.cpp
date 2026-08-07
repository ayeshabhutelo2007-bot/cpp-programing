#include<iostream>
using namespace std;
class interest
{
private:
float principle,rate,time;
public:
void accept()
{
cout<<"Enter Principle:";
cin>>principle;
cout<<"Enter Rate:";
cin>>rate;
cout<<"Enter the time:";
cin>>time;
}
void calculate()
{
float SI;
SI=(principle*rate*time)/100;
cout<<"Simple Interest: "<<SI<<endl;
}
};
int main()
{
interest i;
i.accept();
i.calculate();
return 0;
}
