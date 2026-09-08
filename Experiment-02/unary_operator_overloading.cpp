#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    void getdata()
    {
        cout << "Enter a number: ";
        cin >> x;
    }

    void operator-()
    {
        x = -x;
    }

    void display()
    {
        cout << "Value = " << x << endl;
    }
};

int main()
{
    Number n;

    n.getdata();

    cout << "Before unary operator overloading:" << endl;
    n.display();

    -n;

    cout << "After unary operator overloading:" << endl;
    n.display();

    return 0;
}
