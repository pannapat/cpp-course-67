#include <iostream>
using namespace std;

class Student
{
    string name; // Should this be public or private?
    int age;

    Student(string n, int a)
    { // What's wrong with this constructor?
        name = n;
        age = a;
    }

    void display()
    { // Can we access private members here?
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Student s1("Alice", 20); // Can this line work?
    s1.display();
}
