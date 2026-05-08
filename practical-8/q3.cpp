#include<iostream>
#include<ctime>
using namespace std;

class Subscription
{
private:
    int userID;
    time_t expiryDate;
    bool isActive;

public:
    Subscription(int id)
    {
        userID = id;
        expiryDate = 0;
        isActive = false;
    }

    void activatePlan(int days)
    {
        time_t now = time(0);
        expiryDate = now + (days * 24 * 60 * 60);
        isActive = true;
        cout << "Plan Activated\n";
    }

    void checkValidity()
    {
        time_t now = time(0);

        if(now > expiryDate)
        {
            isActive = false;
        }
    }

    void getStatus()
    {
        checkValidity();

        if(isActive)
        {
            cout << "Subscription Active\n";
        }
        else
        {
            cout << "Subscription Expired\n";
        }
    }
};

int main()
{
    Subscription s1(101);

    s1.activatePlan(1);
    s1.getStatus();

    return 0;
}