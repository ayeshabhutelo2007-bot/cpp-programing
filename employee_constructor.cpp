#include<iostream>
#include<string>
using namespace std;
class employee
{
private:
int ID;
string name;
float salary;
public:
employee()
{
ID=152;
name="shravani";
salary=200000;
}

employee(int i,string n,float s)
{
ID=i;
name=n;
salary=s;
}

employee(const employee &e)
{
ID=e.ID;
name=e.name;
salary=e.salary;
}
void display()
{
cout<<"Enter employee id: "<<ID<<endl;
cout<<"Enter employee name: "<<name<<endl;
cout<<"Enter employee salary: "<<salary<<endl;
cout<<endl;
}
};
int main()
{
employee e1;
cout<<"Employee 1(default constructor): "<<endl;
e1.display();

employee e2(101,"Ayesha",500000);
cout<<"Employee 2(paramerterized constructor): "<<endl;
e2.display();

employee e3(e2);
cout<<"Employee 3(copy constructor): "<<endl;
e3.display();
return 0;
}


