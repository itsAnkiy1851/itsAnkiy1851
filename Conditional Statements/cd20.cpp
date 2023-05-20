/*
Display Digit in words
Display given Digit in Words



function DigitToWord(int d)

1 -- one

2 -- two

3 -- three

4 -- four

5 -- five

6 -- six

7 -- seven

8 -- eight


0 -- zero

*/
#include<iostream>
using namespace std;

char Digit(int num){
    
    switch(num){

    case 0:
        cout<<"zero";
        break;
    case 1:
        cout<<"one";
        break;
    case 2:
        cout<<"two";
        break;
    case 3:
        cout<<"three";
        break;
    case 4:
        cout<<"four";
        break;
    case 5:
        cout<<"five";
        break;
    case 6:
        cout<<"six";
        break;
    case 7:
        cout<<"seven";
        break;
    case 8:
        cout<<"eight";
        break;
    case 9:
        cout<<"nine";
        break;
    case 10:
        cout<<"ten";
        break;



    }
}

int main()
{
    Digit(0);
 return 0;
}