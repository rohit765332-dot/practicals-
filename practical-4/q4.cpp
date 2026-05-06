#include<iostream>
#include<string>
using namespace std;

class Login{
private:
    string username;
    int passward;

public:
    void setcredentails(string userName , int passWard){
        username = userName;
        passward = passWard;
    }

    void checkLogin(string inputuser , int inputpass){
        if (inputuser == username && inputpass == passward)
            cout<<"login successful";
        else
            cout<<"enter correct username and password";
    }
};

int main(){

    Login l1;
    string userinput, username;
    int inputpass, passward;

    cout<<"Enter username: ";
    cin>>userinput;

    cout<<"Enter password: ";
    cin>>inputpass;

    l1.setcredentails(userinput, inputpass);

    cout<<"==== Login your account ===="<<endl;

    cout<<"Enter username: ";
    cin>>username;

    cout<<"Enter password: ";
    cin>>passward;

    l1.checkLogin(username , passward);

    return 0;
}