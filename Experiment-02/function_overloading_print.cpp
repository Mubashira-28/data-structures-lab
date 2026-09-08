#include <iostream>
using namespace std;

void print(int n)
{
    cout << "Integer: " << n << endl;
}

void print(float n)
{
    cout << "Float: " << n << endl;
}

void print(char c)
{
    cout << "Character: " << c << endl;
}

int main()
{
    int a;
    float b;
    char c;

    cout << "Enter an integer: ";
    cin >> a;

    cout << "Enter a float: ";
    cin >> b;

    cout << "Enter a character: ";
    cin >> c;

    print(a);
    print(b);
    print(c);

    return 0;
}
