/*
Display Month Name
Display Name of a Month for a given Month number



function MonthName(int m)

1 -- jan

2 -- feb

3 -- mar

4 -- apr

5 -- may

6 -- jun

7 -- jul

8 -- aug

9 -- sep

10 -- oct

11 -- nov

12 -- dec*/
#include<iostream>
using namespace std;

char MonthName(int month){
        switch (month)
    {
    case 1:
    cout<<"JAN";
        break;
        
    case 2:
    cout<<"FEB";
        break;

    case 3:
    cout<<"MAR";
        break;
    
    case 4:
    cout<<"APR";
        break;

    
    case 5:
    cout<<"MAY";
        break;

    case 6:
    cout<<"JUNE";
        break;

    case 7:
    cout<<"JULY";
        break;

    case 8:
    cout<<"AUG";
        break;

    case 9:
    cout<<"SEP";
        break;
    
    case 10:
    cout<<"OCT";
        break;

    
    case 11:
    cout<<"NOV";
        break;

    case 12:
    cout<<"DEC";
        break;

    default:
        break;
    }
}


int main()
{
    MonthName(12);
 return 0;
}