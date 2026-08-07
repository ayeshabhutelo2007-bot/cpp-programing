#include<iostream>
using namespace std;
class student
{
private:
int rollno;
string name;
float percentage;
public:
void accept()
{
cout<<"Enter Roll No:";
cin>>rollno;
cout<<"Enter the name:";
cin>>name;
cout<<"Enter the percentage:";
cin>>percentage;
}
void display()
{
cout<<"\n Student Information: "<<name<<endl;
cout<<"Roll No: "<<rollno<<endl;
cout<<"Percentage: "<<percentage<<endl;
}
};
int main()
{
student s;
s.accept();
s.display();
return 0;
}


