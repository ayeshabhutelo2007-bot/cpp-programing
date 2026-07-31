#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int choice,num,n,sum=0,rem,reverse=0,original;
cout<<"1. Sum of N natural numbers\n";
cout<<"2. Reverse of number\n";
cout<<"3. Palindrome number\n";
cout<<"4. Armstrong number\n";
cout<<"Enter your choice:";
cin>>choice;
switch(choice){
case 1:
cout<<"Enter the number =";
cin>>n;
sum = n*(n+1)/2;
cout<<"sum = "<<sum;
break;
case 2:
cout<<"Enter the number =";
cin>>num;
while (num!=0)
{
rem=num%10;
reverse=reverse*10+rem;
num=num/10;
}
cout<<"reverse of the number ="<<reverse<<endl;
case 3:
cout<<"Enter the number =";
cin>>num;
original= num;
reverse=0;
while (num!=0)
{
rem=num%10;
reverse=reverse*10+rem;
num=num/10;
}
if(original== reverse)
cout<<"Palindrome Number"<<endl;
else
cout<<" Not a Palindrome Number"<<endl;
break;
case 4:
cout<<"Enter the number =";
cin>>num;
original= num;
sum=0;
while (num!=0)
{
rem=num%10;
sum=sum+pow(rem,3);
num=num/10;
}
if (sum==original)
cout<<"The number is Armstrong number"<<endl;
else
cout<<"The number is not a Armstrong number"<<endl;
break;
default:
cout<<"Invalid Choice";
}
return 0;
}
