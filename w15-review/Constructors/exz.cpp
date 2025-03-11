#include <iostream>
using namespace std;

// Base class 1
class Base1
{
public:
    Base1()
    {
        cout << "Base1 class default constructor called." << endl;
    }
};

// Base class 2
class Base2
{
public:
    Base2()
    {
        cout << "Base2 class default constructor called." << endl;
    }
};

// Derived class inheriting from Base1 and Base2
class Derived : public Base1, public Base2
{
public:
    Derived()
    {
        cout << "Derived class default constructor called." << endl;
    }
};

int main()
{
    // Create an object of the Derived class
    Derived obj;
    return 0;
}

// Example 5: Multiple Inheritance and Constructor Calls
// If a derived class inherits from multiple base classes,
// the constructors of the base classes are called
// in the order of inheritance.
