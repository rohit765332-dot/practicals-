#include<iostream>
using namespace std;

class Rocket
{
    int rocketID;
    int fuelLevel;
    string launchCode;
    bool isLaunched;

public:
    Rocket(int rocketID, int fuelLevel, string launchCode, bool isLaunched)
    {
        this->rocketID = rocketID;
        this->fuelLevel = fuelLevel;
        this->launchCode = launchCode;
        this->isLaunched = isLaunched;
    }

    void refuel(int amount)
    {
        if(isLaunched)
        {
            cout << "Cannot refuel after launch!\n";
            return;
        }

        if(amount <= 0)
        {
            cout << "Invalid fuel amount!\n";
            return;
        }

        if(fuelLevel >= 100)
        {
            cout << "Tank already full!\n";
            return;
        }

        if(fuelLevel + amount > 100)
        {
            int allowed = 100 - fuelLevel;
            cout << "Only " << allowed << "% fuel can be added\n";
            fuelLevel = 100;
        }
        else
        {
            fuelLevel += amount;
        }

        cout << "Current Fuel: " << fuelLevel << "%\n";

        if(fuelLevel >= 80)
            cout << "Ready for launch\n";
        else
            cout << "Not enough fuel for launch\n";
    }

    void setLaunchCode(string code)
    {
        launchCode = code;
    }

    void launch(string enteredCode)
    {
        if(!isLaunched && launchCode == enteredCode && fuelLevel >= 80)
        {
            isLaunched = true;
            cout << "Rocket launched successfully!\n";
        }
        else
        {
            cout << "Launch failed!\n";
        }
    }

    void getStatus()
    {
        cout << "Fuel: " << fuelLevel << "%\n";
        if(isLaunched)
            cout << "Launched\n";
        else
            cout << "Not Launched\n";
    }
};

int main()
{
    Rocket r(123, 70, "", false);

    r.refuel(20);
    r.setLaunchCode("abc@123");
    r.launch("abc@123");
    r.getStatus();

    return 0;
}