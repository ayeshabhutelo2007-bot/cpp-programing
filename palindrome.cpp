#include<iostream> 
using namespace std;
int main()
{
int n,rev,rem,og;
rev=0;
cout<<"Enter the number =";
cin>>n;
og = n;
while (n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(og == rev)
cout<<"Palindrome Number"<<endl;
else
cout<<" Not a Palindrome Number"<<endl;
return 0;
}
