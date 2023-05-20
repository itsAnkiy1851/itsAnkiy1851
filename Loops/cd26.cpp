/*
Check if a number is Perfect Number
Write a loop to check if a number is perfect number

PERFECT NUMBER - sum of the factors of number is double the number



function Perfect(int n)

output

cout<<"perfect"

cout<<"not perfect"*/
#include<iostream>
using namespace std;
bool Perfect(int n){
    int factor =0;
    cout<<"Factors of "<<n<<" are ";
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0){
            cout<<i<< " ";
            factor = factor+i;

        }
        
       

    }
    cout<<endl;
    cout<<"sum of factors is :" <<factor<<endl;
    if(factor == 2*n){
        cout<<"PERFECT NUMBER";
    }
    else{
        cout<<"Not a Perfect number";
    }
}
int main(){
    Perfect(15);

    return 0;
}
