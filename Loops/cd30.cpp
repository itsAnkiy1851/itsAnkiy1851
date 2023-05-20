/*
Reverse a Number
Write a loop for Reversing the Digits of a Number



function Reverse(int n)

output

cout<<revṇ*/
#include<iostream>
using namespace std;
  
  int Reverse(int n){
    int rev =0;
    while( n != 0){
        rev = n% 10;
        n = n/ 10;
        cout<<rev;

    }
  }

int main()
{
    Reverse(123);
 return 0;
}