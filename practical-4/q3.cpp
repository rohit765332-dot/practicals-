#include<iostream>
using namespace std;

class Mobile {
private:
    int pin;

public:
    void setPin(int p) {
        pin = p;
    }

    void unlock(int enteredPin) {
        if(pin == enteredPin)
            cout << "Phone Unlocked";
        else
            cout << "Wrong PIN";
    }
};

int main() {
    Mobile m;
    int setPin, enterPin;

    cout << "Set PIN: ";
    cin >> setPin;

    m.setPin(setPin);

    cout << "Enter PIN to unlock: ";
    cin >> enterPin;

    m.unlock(enterPin);

    return 0;
}