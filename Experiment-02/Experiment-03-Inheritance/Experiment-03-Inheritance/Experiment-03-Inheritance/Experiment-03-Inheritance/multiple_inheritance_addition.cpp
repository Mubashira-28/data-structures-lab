#include <iostream>
using namespace std;

class A
{
protected:
    int a;
};

class B
{
protected:
    int b;
};

class C : public A, public B
{
    int sum;

public:
    void getdata()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void calculate()
    {
        sum = a + b;
    }

    void display()
    {
        cout << "Addition = " << sum << endl;
    }
};

int main()
{
    C obj;

    obj.getdata();
    obj.calculate();
    obj.display();

    return 0;
}
