/*
Check if a Number is Prime number
Write a loop to count factors of a number

check if a number is a Prime number



PRIME NUMER -- a number having factors 1 and itself, it will have only 2 factors



function Prime(int n)

output

cout<<"prime"

cout<<"not prime"*/


#include<iostream>
using namespace std;

bool isPrime(int n){
    int count =0;
    cout<<"Factors of the number are  :";
    for(int i=1;i<=n;i++){
        if(n %  i == 0){
            cout<<i<<", ";
            count = count + 1;
        }
        
    }
    cout<<endl;
    if(count<=2){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
   
}


int main()
{
    isPrime(15);
 return 0;
}