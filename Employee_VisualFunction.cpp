
#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void salary()
    {
        cout << "Employee Salary" << endl;
    }
};

class Manager : public Employee
{
public:
    void salary() override
    {
        cout << "Salary of the Manager is 50000" << endl;
    }
};

class Developer : public Employee
{
public:
    void salary() override
    {
        cout << "Salary of the Developer is 30000" << endl;
    }
};

int main()
{
    Manager m;
    Developer d;
    int choice;

    cout << "1. Developer" << endl;
    cout << "2. Manager" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        d.salary();
    }
    else if (choice == 2)
    {
        m.salary();
    }
    else
    {
        cout << "Invalid Position";
    }

    return 0;
}
