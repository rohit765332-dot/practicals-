#include<iostream>
#include<string>
using namespace std;

class ATM {
private:
    double balance;

public:
    string username;
    long accNo;

    ATM(){
        balance = 0;
    }

    void deposit(double amt){
        balance += amt;
        cout<<"Successfully Deposit : " << amt << endl;
    }

    void withdraw(double amt){
        if(balance >= amt){
            balance -= amt;
            cout<<"Successfully Withdraw : " << amt << endl;
        }else;{
            cout<<"Current balance is low" << endl;
        }
    }

    void showBalance(){
        cout<<"Current Balance : "<< balance << endl;
        cout<<string(50,'-')<<endl;
    }

    void showDetail(){KO
        cout<<"Username : "<< username << endl;
        cout<<"Account No : "<< accNo << endl;
        cout<<"Current Balance : "<< balance << endl;
    }
};

int main(){
    ATM user1;
    user1.username = "Rohit";
    user1.accNo = 85274;

    user1.deposit(10000);
    user1.withdraw(500);

    user1.showBalance();
    user1.showDetail();

    return 0;
}