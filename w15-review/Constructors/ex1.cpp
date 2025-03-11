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
    Derived()
    {
        cout << "Derived class default constructor called." << endl;
    }
};

int main()
{
    Derived obj;
    return 0;
}

// Note: Default Constructor in Base and Derived Classes