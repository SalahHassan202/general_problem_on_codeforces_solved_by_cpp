// A. Juicer
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
int main ()
{
    /*
    2 7 10
    5 6
    ===============
    output is 1 

    how....?

    2 7 10     ====> 2 is the number of orange , 7 is the max size of orange , 10 is condition 
    5 6        ====> value 1 , value 2 . ....etc 
    =================
    the first that any value (value 1 , value 2 , ....etc ) not to be > the max size of orange 
    if the value > the max size of orange  
    i will ignore it 

    if the max size of orange = 7 
    value 1 , value 2 ===> 5 6 
    condition = 10 
    5 + 6 = 11 
    11 - condition = 1 

    the output is 1 

    
    */

   int number_of_orange ,the_max_size_of_orange , condition ; 
   cin >> number_of_orange >> the_max_size_of_orange >> condition ;

   int sum = 0 , counter = 0 ; 

   for( int i = 0 ; i < number_of_orange ; i++)
   {
        int val ;   // value 
        cin >> val ;

        if(val <= the_max_size_of_orange)
        {
            sum+= val;
        }

        if(sum > condition)
        {
            counter++;
            sum = 0 ; 
        }
   }
    cout<< counter << endl;

    return 0 ;
}