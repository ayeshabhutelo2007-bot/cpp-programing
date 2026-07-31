#include<iostream> 
using namespace std;
int main()
{
int n,rev,rem;
rev=0;
cout<<"Enter the number =";
cin>>n;
while (n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
cout<<"reverse of the number ="<<rev<<endl;
return 0;
}
