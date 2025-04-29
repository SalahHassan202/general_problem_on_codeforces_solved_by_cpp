// A. Dreamoon and Stairs
#include <iostream>
#include <string>
#include <iomanip>                                  //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;

int main()
{
    /*
    10 2 
    ---------------
    output = 6 
    ---------------
    solution 
    10 stairs , 2 step 

    1 2 3 4 5 6 7 8 9 10 
    1 step ===> 10 stairs                   ( true )    ===> because 10 is not a multiple of an integer 2 
    2 step ===> 5 stairs                    ( false )   ===> because 5 is not a multiple of an integer 2 
    2 , 2 , 2 , 2 , 1 , 1    ===> 6 ===>    ( true )    ===> because 6 is not a multiple of an integer 2 

    output is 6 ===> min( 10 , 6 ) ==> 6 
    
    */
    int no_of_stairs , steps , min = 0 , max = 0 ;
    cin >> no_of_stairs >> steps ;

    max = no_of_stairs ;

    if(no_of_stairs % 2 == 0)      // even 
    {
        min = no_of_stairs / 2 ;
    }
    else                          // odd
    {
        min = ( no_of_stairs / 2 )+ 1;
    }

    for(int i = min ; i <= max ; i++)
    {
        if(i % steps == 0)
        {
            cout << i << endl;
            return 0 ;
        }
    }

    cout << -1 << endl;
    

    return 0 ;
}