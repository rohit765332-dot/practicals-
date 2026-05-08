#include<iostream>
using namespace std;

class Employee {
public:
    string employeeId;
    string name;
    int score;

    void input() {
        cout << "Enter Employee ID: ";
        cin >> employeeId;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Score: ";
        cin >> score;
    }

    void display() {
        cout << "ID: " << employeeId << ", Name: " << name << ", Score: " << score << endl;
    }
};

int main() {
    Employee e[3];

    for(int i = 0; i < 3; i++) {
        cout << "\nEmployee " << i+1 << endl;
        e[i].input();
    }

    int totalScore = 0;
    int highestIndex = 0;

    cout << "\nEmployees scoring below 50:\n";

    for(int i = 0; i < 3; i++) {

        if(e[i].score < 50) {
            e[i].display();
        }

        if(e[i].score > e[highestIndex].score) {
            highestIndex = i;
        }

        totalScore += e[i].score;
    }

    float average = totalScore / 3.0;

    cout << "\nBest Performing Employee:\n";
    e[highestIndex].display();

    cout << "\nAverage Score: " << average << endl;

    return 0;
}