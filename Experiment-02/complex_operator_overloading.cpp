#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    void input()
    {
        cin >> real >> imag;
    }

    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator -(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    void display()
    {
        cout << real << " + j" << imag << endl;
    }
};

int main()
{
    Complex a, b, c, d;

    cout << "Enter real and imaginary parts of first complex number: ";
    a.input();

    cout << "Enter real and imaginary parts of second complex number: ";
    b.input();

    c = a + b;
    d = a - b;

    cout << "Addition: ";
    c.display();

    cout << "Subtraction: ";
    d.display();

    return 0;
}
