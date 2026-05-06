#include <iostream>
using namespace std;

class Mobile
{
private:
    string brand;
    int ram;
    float price;

public:
    Mobile(string b, int r, float p)
    {
        brand = b;
        ram = r;
        price = p;
    }

    Mobile(Mobile &m)
    {
        brand = m.brand;
        ram = m.ram;
        price = m.price;
    }

    void show()
    {
        cout << "Brand: " << brand << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Price: " << price << endl;
        cout << endl;
    }
};

int main()
{
    Mobile m1("samsung", 6, 28000);
    Mobile m2(m1);

    cout << "First Mobile\n";
    m1.show();

    cout << "Second Mobile \n";
    m2.show();

    return 0;
}