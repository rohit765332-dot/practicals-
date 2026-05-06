#include<iostream>
using namespace std;
int main(){
    int Rollnum ,marks ;
    char name[20];

    cout<<"enter your name ";
    cin>>name;
    cout<<"enter a Rollnum :";
    cin>>Rollnum;

    cout<<"Enter the marks :";
    cin>>marks;

    if(marks>=40){
        
        cout<<"You are pass !!";
    }
    else{
        cout<<"You are fail";
    }


    


    return 0;
}