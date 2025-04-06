// A. A+B?
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    
   long long t ;                   cin >> t ;
   while(t--)
   {
        long long num1 , num2 ;
        char sign = '+' ;
        cin>> num1 >> sign >> num2 ;
        cout << num1+num2 << endl;
   }
    
    return 0 ;
}