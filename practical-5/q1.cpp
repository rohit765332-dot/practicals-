#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int id;
    string name;
    float price;

public:
    Book(int i, string n, float p)
    {
        id = i;
        name = n;
        price = p;
    }

    void show()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << endl;
    }

    float getPrice()
    {
        return price;
    }

    string getName()
    {
        return name;
    }
};
void compare(Book b1,Book b2){
    if (b1.getPrice() > b2.getPrice())
        cout << b1.getName() << "is expensive";
    else if (b2.getPrice() > b1.getPrice())
        cout << b2.getName() << "is expensive";
    else
        cout << "Both books have same price\n";

}
int main()
{
    Book b1(1, "C++", 500);
    Book b2(2, "C ", 700);

    cout << "Book 1\n";
    b1.show();

    cout << "Book 2\n";
    b2.show();
    
    compare(b1,b2);
    return 0;
}