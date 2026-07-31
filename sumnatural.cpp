#include<iostream> 
using namespace std;
int main()
{
int n,sum;
sum=0;
cout<<"Enter the number =";
cin>>n;
for(int i=1;i<=n;i++)
{
sum+=i;
}
cout<<"sum of first "<<n<<" natural numbers="<<sum<<endl;
return 0;
}
