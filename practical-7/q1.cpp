#include<iostream>
#include<string>
using namespace std;

class player{
public:
    string name;
    int score[5];

    void input() {
        cout << "Enter player name :";
         cin >> name;
        

        cout <<"Enter 5 round scores:";
        for(int i=0; i<5; i++){
            cin >> score[i];
        }
    }

    int totalScore() {
        int sum = 0;
        for(int i=0; i<5; i++){
            sum+=score[i];
        }
        return sum;
    }

    float average() {
        return totalScore()/5.0;
    }
};

int main() {
    player p[2];

    for(int i = 0; i < 2; i++) {  
        cout << "\nPlayer " << i+1 << " details:\n";
        p[i].input(); 
    } 

    int highest = 0; 
    int index = 0; 

    for(int i = 0; i < 2; i++) {   
        if(p[i].totalScore() > highest) {
            highest = p[i].totalScore(); 
            index = i; 
        } 
    }

    cout << "Highest Scorer: " << p[index].name <<endl; 
    cout << "Total Score: " << highest << endl;

    cout << "\nAverage Scores:\n"; 

    for(int i = 0; i < 2; i++) { 
        cout << p[i].name << " = " << p[i].average() << endl; 
    }

    return 0;
}