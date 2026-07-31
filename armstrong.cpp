#include<iostream> 
#include<cmath>
using namespace std;
int main()
{
int n,rem,og,sum;
sum=0;
cout<<"Enter the number =";
cin>>n;
og = n;
while (n!=0)
{
rem=n%10;
sum=sum+pow(rem,3);
n=n/10;
}
if (sum==og)
cout<<"The number is Armstrong number"<<endl;
else
cout<<"The number is not a Armstrong number"<<endl;
return 0;
}







