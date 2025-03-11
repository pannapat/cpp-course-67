#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void MakeSound()
    {
        cout << "Animal sound." << endl;
    }
};

class Dog : public Animal
{
public:
    void MakeSound()
    {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void MakeSound()
    {
        cout << "Meow!" << endl;
    }
};

int main()
{
    Animal *animals[] = {new Dog(), new Cat()};
    int animal_num = 2;

    for (int i = 0; i < animal_num; i++)
    {
        animals[i]->MakeSound();
        delete animals[i];
    }

    return 0;
}