// A. Square
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

    long long t;      cin >> t ;     //  testCases;
    long long  x1 , y1 , x2 , y2 , x3 , y3 , x4 , y4 ;
    long long length = 0 ;
    while(t--)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 ; 
        /*
           int x[4], y[4];

        /// Read coordinates of the corners

        for (int i = 0; i < 4; ++i) {
            cin >> x[i] >> y[i];
        }
        */
        length = max(abs(x1 - x2) , abs (y1 - y2)) ;
        cout << (length * length )  << endl;
        
    }

    return 0;
}