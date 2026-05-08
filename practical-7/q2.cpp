#include<iostream>
using namespace std;

class Student {
public:
    string name;
    float cgpa;

    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void display() {
        cout << "Name: " << name << ", CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s[2];

    for(int i = 0; i < 2; i++) {
        cout << "\nStudent " << i+1 << endl;
        s[i].input();
    }

    int eligibleCount = 0;
    int highestIndex = 0;

    cout << "\nEligible Students:\n";

    for(int i = 0; i < 2; i++) {
        if(s[i].cgpa >= 8.0) {
            s[i].display();
            eligibleCount++;
        }

        if(s[i].cgpa > s[highestIndex].cgpa) {
            highestIndex = i;
        }
    }

    cout << "\nHighest CGPA Student:\n";
    s[highestIndex].display();

    cout << "\nTotal Eligible Students: " << eligibleCount << endl;

    return 0;
}