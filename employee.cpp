#include<iostream>
using namespace std;
class Employee
{
private:
int employeeID;
string name;
float salary;
public:
void accept()
{
cout<<"Enter Employee ID:";
cin>>employeeID;
cout<<"Enter the name:";
cin>>name;
cout<<"Enter the salary:";
cin>>salary;
}
void display()
{
cout<<"\nEmployee Information: "<<name<<endl;
cout<<"Employee ID: "<<employeeID<<endl;
cout<<"Salary: "<<salary<<endl;
}
};
int main()
{
Employee e;
e.accept();
e.display();
return 0;
}


