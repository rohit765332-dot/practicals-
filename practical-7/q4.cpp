#include<iostream>
using namespace std;

class Customer {
public:
    string name;
    int accountNumber;
    int transaction[5];

    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter 5 Transactions:\n";
        for(int i = 0; i < 5; i++) {
            cin >> transaction[i];
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
    }
};

int main() {
    Customer c;

    c.input();

    int total = 0;
    int highest = c.transaction[0];

    cout << " Suspicious Transactions (>50000):" << endl;

    for(int i = 0; i < 5; i++) {
        total += c.transaction[i];

        if(c.transaction[i] > highest) {
            highest = c.transaction[i];
        }

        if(c.transaction[i] > 50000) {
            cout << c.transaction[i] << endl;
        }
    }

    cout << "\nTotal Transaction Value: " << total << endl;
    cout << "Highest Transaction: " << highest << endl;

    return 0;
}