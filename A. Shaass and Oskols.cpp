// A. Shaass and Oskols
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    /*
    the idea of solution is 
    i have many boxes i want you to kill the birds in the boxes 
    example
    3              ====> the number of boxes 
    2 4 1          ====> the first box is 2 (having 1 , 2 birds ) &&  the second box is  (having 1 , 2 , 3 ,4 birds )  &&  the third box is 1 (having 1 birds )
    1              ====> refer to the first box 
    2 2            ====> go to the box having to birds and kill the bird number of 2 

    =======================

    2                   4                    1           ====> three boxes 
    first box        second box           third box 
    1 , 2             1 , 2 , 3 , 4         1            ====> every box contain...
    
    2   2     ====>  go to the box having to birds and kill the bird number of 2 

    1 2                 1 0 3 4                1        ===> kill the bird # 2 from second box and put 0 

   1 0 3 4         ===> put the left in left box 1 && the right in right box 3 4
   contain 
   1 2 1      0       1 3 4 

   output is 
   3 0 3 

    */

   int size ;           cin >> size ;
   int arr[size];
   for(int i = 0 ; i< size ; i++)
   {
        cin >> arr[i] ;
   }
   int kill;    // the number of bird i will kill it 
   cin >> kill ;

   int boxNum , bird ;

   for(int i = 0 ; i< kill ; i++)
   {
        cin >> boxNum >> bird ;
        arr[boxNum - 2 ] += bird - 1 ;         // Array zero index 
        arr[boxNum] += arr[boxNum - 1] - bird ;       
        arr[boxNum - 1] = 0 ;
   }

   for(int i = 0 ; i < size ; i++)
   {
        cout<< arr[i] << endl;
   }
 

    return 0;
}

