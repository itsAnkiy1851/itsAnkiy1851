/*
Check if a number is Armstrong Number
Write a loop to find sum of cubes of digits of a number and check if its Armstrong number



function Armstrong(int n)

ARMSTRONG NUMBER - if the sum of cubes of digits of a number is equal to a number



output

cout<<"armstrong"

cout<<"not a armstrong"*/
#include<iostream>
using namespace std;
int cube =0;
int rev=0;
int lDigit;
    int Rev(int n){
        while(n !=  0){
            
            rev = n % 10;
            n = n / 10;
            cout<<rev<<endl;
            cube = rev*rev*rev;
            cout<<cube<<"cube";

        }
        
    }


int main()
{
    Rev(123);
 return 0;
}


