#include <iostream>
using namespace std;

class Distance
{
    int meter;

public:
    void getdata()
    {
        cout << "Enter distance in meters: ";
        cin >> meter;
    }

    friend Distance add(Distance, Distance);
    void display()
    {
        cout << "Total distance = " << meter << " meters" << endl;
    }
};

Distance add(Distance d1, Distance d2)
{
    Distance temp;
    temp.meter = d1.meter + d2.meter;
    return temp;
}

int main()
{
    Distance d1, d2, d3;

    d1.getdata();
    d2.getdata();

    d3 = add(d1, d2);

    d3.display();

    return 0;
}
