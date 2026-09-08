#include <iostream>
using namespace std;

float area(float r)
{
    return 3.14 * r * r;
}

float area(float l, float b)
{
    return l * b;
}

float area(int s)
{
    return s * s;
}

int main()
{
    float r, l, b;
    int s;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle = " << area(r) << endl;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of rectangle = " << area(l, b) << endl;

    cout << "Enter side of square: ";
    cin >> s;
    cout << "Area of square = " << area(s) << endl;

    return 0;
}
