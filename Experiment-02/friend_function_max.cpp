#include <iostream>
using namespace std;

class sample1
{
    int a;

public:
    void getdata()
    {
        cout << "Enter value for sample1: ";
        cin >> a;
    }

    friend void maximum(sample1, class sample2);
};

class sample2
{
    int b;

public:
    void getdata()
    {
        cout << "Enter value for sample2: ";
        cin >> b;
    }

    friend void maximum(sample1, sample2);
};

void maximum(sample1 x, sample2 y)
{
    if (x.a > y.b)
        cout << "Maximum = " << x.a << endl;
    else
        cout << "Maximum = " << y.b << endl;
}

int main()
{
    sample1 s1;
    sample2 s2;

    s1.getdata();
    s2.getdata();

    maximum(s1, s2);

    return 0;
}
