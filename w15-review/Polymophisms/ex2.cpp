#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void Work()
    {
        cout << "Employee is working." << endl;
    }
};

class Manager : public Employee
{
public:
    void Work()
    {
        cout << "Manager is managing the team." << endl;
    }
};

class Developer : public Employee
{
public:
    void Work()
    {
        cout << "Developer is writing code." << endl;
    }
};

int main()
{
    Employee *employees[] = {new Manager(), new Developer()};
    int employee_num = 2;

    for (int i = 0; i < employee_num; i++)
    {
        employees[i]->Work();
        delete employees[i];
    }

    return 0;
}