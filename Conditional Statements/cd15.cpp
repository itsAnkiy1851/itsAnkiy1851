/*  
Nature of Quadratic Roots
Write nested if statements for printing Nature of Roots of Quadratic equation and also root

* this coding exercise is based on previous video*

find discriminant

d=b^2-4ac

if d=0 then roots are real and equal

if d>0 roots are real but unequal

if d<0 then riots are imaginary



function Roots(float a ,float b, float c)



output

cout<<"real and equal "<<r1;

cout<<"real and unequal "<<r1<<" "<<r2;

cout<<"imaginary";*/
#include<iostream>
#include<math.h>
using namespace std;

float roots(int a, int b, int c){
    float d =(b*b)-(4*a*c);
    float r1=((-b)+sqrt(d))/(2*a);
    float r2=((-b)-sqrt(d))/(2*a);


    if(d==0){
        cout<<"Root is real and equal i.e "<<r1;
    }
   
    else if (d>0)
    {
        cout<<" Roots are real and unequal "<<r1<<"  , "<<r2;    
    }
    else{
        cout<<"imaginary ";
    }
    
}
int main(){
     roots(1, 5, 4);

    

 return 0;
}
