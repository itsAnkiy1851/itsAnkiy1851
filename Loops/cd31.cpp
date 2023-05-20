/*

Check if a Number is a Palindrome
Write a loop to reverse a number and then check if its a Palindrome

PALINDROME -- reverse of a number is equal to a number



function Palindrome(int n)



output

cout<<"palindrome";

cout<<"not a palindrome";*/
#include <iostream>
using namespace std;

bool isPalindrome(int n)
{    
    int digit, rev, num ;
    n= num;
    while (num != 0)
    {
         digit = n % 10;
         rev = (rev*10)+digit;
         num  = num/10;
         cout<<num;
        
    }
    if (n == rev)
    {
        cout << " Palindrome";
    }
    else
    {
        cout << " Not Palindrome";
    }
}

int main()
{
    isPalindrome(111);

    return 0;
}

