/*
Display Day name
Display name of the Day fro given Day Number

day number -- day name(3 letters)

1 -- sun

2 -- mon

3 -- tue

4 -- wed

5 -- thu

6 -- fri

7 -- sat

function DayName(int day)

day -- Day number
*/
#include<iostream>
using namespace std;
char DayName(int day){
    
    switch (day)
    {
    case 1:
    cout<<"sun";
        break;
        
    case 2:
    cout<<"mon";
        break;

    case 3:
    cout<<"tue";
        break;
    
    case 4:
    cout<<"wed";
        break;

    
    case 5:
    cout<<"thu";
        break;

    case 6:
    cout<<"fri";
        break;

    case 7:
    cout<<"sat";
        break;

    default:
        break;
    }
}
    



int main()
{
    DayName(7);
 return 0;
}