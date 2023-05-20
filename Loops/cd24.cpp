/*
Find Factorial of number
Write a loop to find factorial of number

function Factorial(int n)



output

cout<<fact*/
#include<iostream>
using namespace std;


int Factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        
        fact = fact*i;
    }
    cout<<fact;
} 
int main()
{
    Factorial(4);
 return 0;
}