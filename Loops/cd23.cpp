/*
Sum of first N natural number
Write a loop to find sum of first n natural number

function SumOfN(int n)



output

cout<<sum */
#include<iostream>
using namespace std;

int SumOfN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum =sum + i;
    }
    cout<<sum;
}



int main()
{
    SumOfN(20);
 return 0;
}