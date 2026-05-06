#include<iostream>
using namespace std;
class cart {
private:
 int item_price;
int  quantity;

public:
  int bill;

void set_item_detail(int price ,int  qty){
     item_price = price;
     quantity = qty;
}
void claculate_total(){
  bill = item_price * quantity;
}
void display_bill(){

    cout<<"item price is : "<<item_price<<endl;
    cout<<"Quantity is : "<<quantity<<endl;
    cout <<"Total bill : "<< bill<<endl;
}
};

int main(){
int  prize;
int quntity_;
cart c1;

cout<<"enter prize : ";
cin>>prize;

cout<<"enter quantity : ";
cin>>quntity_;

c1.set_item_detail(prize , quntity_);
c1.claculate_total();
c1.display_bill();

return 0;

}