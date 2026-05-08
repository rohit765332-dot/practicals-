#include<iostream>
using namespace std;

class Machine
{
private:
    int temperature;
    int maxTemperature;

public:
    Machine()
    {
        temperature = 0;
        maxTemperature = 100;
    }

    void setMaxTemperature(int m)
    {
        maxTemperature = m;
    }

    void increaseTemperature(int t)
    {
        if(temperature + t > maxTemperature)
            cout << "Warning!\n";
        else
            temperature += t;
    }

    void decreaseTemperature(int t)
    {
        if(temperature - t < 0)
            cout << "Warning!\n";
        else
            temperature -= t;
    }

    void getTemperature()
    {
        cout << "Temp: " << temperature << endl;
    }
};

int main()
{
    Machine m;

    m.setMaxTemperature(80);
    m.increaseTemperature(50);
    m.getTemperature();

    m.increaseTemperature(40);
    m.decreaseTemperature(20);
    m.getTemperature();

    return 0;
}