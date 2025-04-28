// A. Odd One Out
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
int main ()
{
    
    int t ;         cin >> t ;
    while (t--)
    {
        int a , b , c ;        // three number 
        cin >> a >> b >> c ;

        if(a == b )
        {
            cout<< c << endl;
        }
        else if (b == c)
        {
            cout<< a << endl;
        }
        else
        {
            cout<< b << endl;
        }
    }


    
    return 0 ;
}