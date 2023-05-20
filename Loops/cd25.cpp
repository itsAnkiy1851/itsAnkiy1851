/*

Find factors of a number
Write a loop to print factors of a given number



function Factors(int n)

output

cout<<i<<" "*/
#include<iostream>
using namespace std;
int factors; 
int Factors(int n){
    
cout<<"factors of "<<n<< " are " ;
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0){
            cout<<i<<",";
        }
        
       
    }
    
     

}
int main()
{
    Factors(56);
 return 0;
}