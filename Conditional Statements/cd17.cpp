/*
Calculate Discounted Bill Amount
Calculate Discounted Bill Amount



function Discount(float amount)

if amount>=5000 offer 20% discount

if 2000<=amount<5000 offer 10% discount

if amount<2000 offer 5% discount



output

print discounted amount ie. bill amount after discount*/
#include<iostream>
using namespace std;

float Discount(float amount){
    if(amount>=5000){
        cout<<"bill amount " <<amount<<" after discounto 20% is "<<amount*0.2;
    }
    else if(amount>=2000 && amount<=5000){
        cout<<"bill amount " <<amount<<" after discount 10% is "<<amount*0.1;
    }
    else if(amount <2000){
        cout<<"bill amount " <<amount<<" after discount of 5% is "<<amount*0.05;
    }

}
int main()
{
    Discount(5000);
 return 0;
}