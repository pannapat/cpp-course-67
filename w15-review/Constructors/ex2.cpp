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
    // Derived class constructor explicitly calls the base class constructor
    Derived(int y) : Base(y)
    {
        cout << "Derived class default constructor called." << endl;
    }
};

int main()
{
    Derived obj(10);
    return 0;
}

// Note: Example 2: Parameterized Constructor in Base Class
// If the base class has a parameterized constructor,
// the derived class must explicitly
// call it using an initializer list.