/*
Display Digits of a number
Write a loop to display Digits of a given number in reverse

function Digits(int n)



output

cout<<digit<<" "*/
#include<iostream>
using namespace std;
int rev=0;
int lDigit;
    int Rev(int n){
        while(n !=  0){
            
            rev = n % 10;
            n = n / 10;
            cout<<rev;
        }

    }


int main()
{
    Rev(123321);
 return 0;
}