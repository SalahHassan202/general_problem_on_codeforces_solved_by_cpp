// A. Snacktower
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    
    /*
    3
    3 1 2
    ===========
    3

    2 1
    how.....?
    check the 3 is the bigest number in (3 1 2 )
    if yes cout << 3 
    if no cout<< endl;

    then go to the 1 
    cout<< endl;

    then go to the last number 2 
    print 2 then 1 
    because 1 not print in the last check so that i will prent it 

    output is 
    3

    2 1 
    ====================================================================
    5
    4 5 1 2 3
    ===========
    output 
     
    5 4


    3 2 1
    how......?
    check if the 4 is the largest number in (4 5 1 2 3)
    if yes print 4 
    if no print endl;
    in this case i will print endl ;

    go to the second element = 5 
    if 5 the bigest number 
    yes 
    print 5 then 4 

    and check for 1 
    peint endl 
    and check for 2 
    print endl;
    abd check for 3 
    print 3 2 1
    
    output 
     
    5 4


    3 2 1
    ====================================================================
    
    */

    /*
    
    the idea of solution is 
    =======================
    ||| ferquancy array |||
    =======================
    
    
    */

   long long snakes ;                cin >> snakes ;         // size 
   long long ferquancyArray[snakes+1] = {0} ;         // snakes + 1   or    size + 1   // beacuse the freauancy array is start from  index 1 not index 0
   long long max = snakes ;             // max = size ;
   for(int i =0 ; i < snakes ; i++)
   {
        long long num ;
        cin >> num ;
        ferquancyArray[num] = 1 ; // 3 2 1   ===>  ferquancyArray[3] = 1 ;   ferquancyArray[1] = 1 ; ferquancyArray[2] = 1 ;

        while(ferquancyArray[max])       // ferquancyArray[max] == 1          // true     // ferquancyArray[max] == 0      // false
        {
            cout<< max << " " ;
            max-- ;
        }
        cout<< endl;


   }


    
    return 0 ;
}