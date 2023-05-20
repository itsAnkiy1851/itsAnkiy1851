/*
Display Grades for Students Marks
Write nested conditions to check average marks and display grades

Calculate Average (Avg)



if Avg >=60 print Grade 'A'

if 35<=Avg<60 print Grade 'B'

if Avg<35 print Grade 'C'



function Grades(int m1,int m2,int m3)

parameters are marks in 3 subjects*/
#include<iostream>
using namespace std;

float Average(int m1, int m2, int m3){
    int Avg=(m1+m2+m3)/3;

    if(Avg >= 60){
        cout<<"Grade is  A";
    }
    else if(Avg>=35 && Avg<=60){
        cout<<"Grade is B";
    }
    else{
        cout<<"Grade is C";
    }

        
    }
int main()
{
    Average(1, 2,3);

 return 0;
}