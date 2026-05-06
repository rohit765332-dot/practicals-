#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){

    int quantity;
    char product_name[40];
    float price,total;
    
    cout<<"Enter product_name ";
    cin>>product_name ;

    cout<<left;
    cout<<"Enter PRICE";
    cin>>price;

    cout<<"Enter product quantity";
    cin>>quantity;

    total=(price*quantity);

    cout<<setw(15)<<"product_name"<<setw(10)<<"price"<<setw(10)<<"quantity"<<setw(10)<<"total"<<endl ;

    cout<<setw(15)<<product_name<<setw(10)<<price<<setw(10)<<quantity<<setw(10)<<total;



    return 0;
}