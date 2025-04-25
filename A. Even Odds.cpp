// A. Even Odds
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    /*
    first case 
    Input:
    10 3
    ===========
    Volodya's sequence will look like this:
    {1, 3, 5, 7, 9, 2, 4, 6, 8, 10}
    The third place in the sequence is therefore occupied by the number 5. So, the output is 5.
    ===========
    output is 
    5
    =============================================
    second case
    Input:
    7 7
    ===========
    Volodya's sequence will look like this:
    {1, 3, 5, 7, 2, 4, 6}
    The seventh place in the sequence is occupied by the number 6. So, the output is 6.
    ===========
    output is 
    6
    =============================================

    
    */

   long long number , position ;
   cin >> number >> position ;

     // If position is less than or equal to number/2, it is odd part of the sequence
    if (position <= (number + 1) / 2)        // odd 
    {
        cout <<position * 2 - 1 << endl;     

        // 1 3 5 7 9 2 4 6 8       ===> odd  ===> position = 3    ===> 3 * 2 - 1 == 5    (true ) == output
    }
    
    else          // even 
    {
    // If position is greater than number/2, it is  even part of the sequence

        cout << (position - (number + 1) / 2) * 2 << endl;

        // 1 3 5 7 9 2 4 6 8       ===> odd  ===> position = 6    ===> 3 * 2 - 1 == 5    (true ) == output
    }

    return 0 ;
}