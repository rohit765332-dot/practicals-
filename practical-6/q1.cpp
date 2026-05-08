// student ki attendance store karta hai
// percentage calculate karta hai
// check karta hai student exam ke liye eligible hai ya nahi

#include <iostream>
#include <string>
using namespace std;

class Attendance
{
private:
    string name;
    int total;
    int attended;

public:
    Attendance(string n, int t, int a){
        name = n;
        total = t;
        attended = a;
    }

    float getPercentage(){
        return (float)attended / total * 100;
    }  

    void display()
    {
        cout<< "  " << endl;
        cout << "Name: " << name << endl;
        cout << "Total Classes: " << total << endl;
        cout << "Attended Classes: " << attended << endl;
        cout << "Percentage: " << getPercentage() << "%" << endl;
    }
};

void checkEligibility(Attendance obj)
{
    if (obj.getPercentage() >= 75)
        cout << "Eligible for Exam" << endl;
    else
        cout << "Not Eligible for Exam" << endl;
}

int main()
{
    Attendance s1("Rohit", 100, 90);
    Attendance s2("vidyarth", 100, 60);

    s1.display();
    checkEligibility(s1);

    s2.display();
    checkEligibility(s2);

    return 0;
}