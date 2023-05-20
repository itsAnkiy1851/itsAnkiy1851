/*
Arithmetic operations using switch
Write switch case for performing Arithmetic operations



function ArithOpt(int x, int y, int choice)

x and y are 2 values

choice

1 -- Add 2 number

2 -- Subtract 2 number

3 -- Multiply 2 number

4 -- Divide 2 numbers

Note: if any difficulty in solving, Click on "exercise.h" to see Solution*/

#include<iostream>
using namespace std;

float ArithOpt(int x, int y, int choice){

    switch(choice){
    
    case 1:
        cout<<"Addition of 2 Number is "<<x+y;
        break;

    case 2:
        cout<<"Subtraction of 2 number is "<<x-y;
        break;

    case 3:
        cout<<"Multiply of 2 number is "<<x*y;
        break;
    
    case 4:
        cout<<"Division of 2 number is "<<x/y;
        break;

    

    }
}



int main()
{
    ArithOpt(2, 3, 2);
 //return 0;
}