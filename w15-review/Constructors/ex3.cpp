#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base class default constructor called." << endl;
    }
};

class Derived : public Base
{
public:
    Derived(int y)
    {
        cout << "Derived class parameterized constructor called with value: " << y << endl;
    }
};

int main()
{
    Derived obj(20);
    return 0;
}

// Note: Example 3: Default Constructor in Base Class and Parameterized Constructor in Derived Class
// If the base class has a default constructor
// and the derived class has a parameterized constructor,
// the base class constructor is automatically called.