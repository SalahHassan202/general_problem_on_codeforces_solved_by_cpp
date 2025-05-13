// A. Stair, Peak, or Neither?
#include <iostream>
#include <string>
#include <iomanip>                                  //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
 
int main()
{
    long long t ;                       cin >> t ;             // testCases ;
    long long  a , b , c  ;                  // three numbers         
    while(t--)
    {
        cin >> a >> b >> c ;

        if((a < b) && (b < c) )
        {
            cout << "STAIR" << endl;
        }
        else if ((a < b) && (b > c) )
        {
            cout << "PEAK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }

    }


    return 0 ;
}
