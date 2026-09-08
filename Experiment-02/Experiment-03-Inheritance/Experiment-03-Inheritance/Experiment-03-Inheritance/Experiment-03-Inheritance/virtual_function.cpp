#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base class print function" << endl;
    }

    void show()
    {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived class print function" << endl;
    }

    void show()
    {
        cout << "Derived class show function" << endl;
    }
};

int main()
{
    Base *ptr;
    Derived obj;

    ptr = &obj;

    ptr->print();
    ptr->show();

    return 0;
}
