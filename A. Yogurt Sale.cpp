// A. Yogurt Sale
#include <iostream>
#include <string>
#include <iomanip>                                  //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
 
int main()
{
    long long  t ;            cin >>  t ;                 // testCases
    long long  a , b , c ;
    while(t--)
    {
        cin >>  a >> b >> c ;
        long long ans = a * b ; 

        if(c < ( 2 * b) )
        {
            cout << ((a/2) * c + (a%2) *b) << endl;
        }
        else
        {
            cout << ans << endl;
        }

    }

    

    return 0 ;
}

