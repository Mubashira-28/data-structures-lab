#include <iostream>
using namespace std;

class A
{
protected:
    int x;
};

class B : public A
{
protected:
    int y;
};

class C : public B
{
    int z, product;

public:
    void getdata()
    {
        cout << "Enter three numbers: ";
        cin >> x >> y >> z;
    }

    void calculate()
    {
        product = x * y * z;
    }

    void display()
    {
        cout << "Product = " << product << endl;
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
