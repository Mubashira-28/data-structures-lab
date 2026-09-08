#include <iostream>
using namespace std;

class Base
{
protected:
    int a, b;
};

class Derived : public Base
{
    int c;

public:
    void getdata()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void calculate()
    {
        c = a + b;
    }

    void display()
    {
        cout << "Addition = " << c << endl;
    }
};

int main()
{
    Derived d;

    d.getdata();
    d.calculate();
    d.display();

    return 0;
}
