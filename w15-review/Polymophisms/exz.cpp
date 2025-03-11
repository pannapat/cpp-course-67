#include <iostream>
using namespace std;

class Operation
{
public:
    virtual int Calculate(int a, int b)
    {
        return 0;
    }
};

class Add : public Operation
{
public:
    int Calculate(int a, int b) override
    {
        return a + b;
    }
};

class Multiply : public Operation
{
public:
    int Calculate(int a, int b) override
    {
        return a * b;
    }
};

int main()
{
    Operation *operations[] = {new Add(), new Multiply()};

    int x = 5, y = 3;
    for (Operation *op : operations)
    {
        cout << "Result: " << op->Calculate(x, y) << endl;
        delete op;
    }

    return 0;
}