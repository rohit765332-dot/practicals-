// #include<iostream>
// using namespace std;
// int main(){
//     int num;


//     cout<<"enter a num :";
//     cin>>num;

//     if(num%2==0){
        
//         cout<<"your number is even !!";
//     }
//     else{
//         cout<<"Your number odd !!";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int num;
bool isEven;
int main(){
 cout<<"enter a num :";
    cin>>num;

    if (num % 2 == 0)
        isEven = true;
    else
        isEven = false;

    if (isEven)
        printf("Number is EVEN\n");
    else
        printf("Number is ODD\n");

    return 0;
}