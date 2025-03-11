#include <iostream>
using namespace std;

class Base
{
public:
    Base(int x)
    {
        cout << "Base class parameterized constructor called with value: " << x << endl;
    }
};

class Derived : public Base
{
public:
    Derived(int y) : Base(y)
    {
        cout << "Derived class default constructor called." << endl;
    }
};

int main()
{
    Derived obj(30);
    return 0;
}

// Note: No Default Constructor in Base Class
// If the base class does not have a default constructor
// and only has a parameterized constructor,
// the derived class must explicitly call
// the base class constructor.