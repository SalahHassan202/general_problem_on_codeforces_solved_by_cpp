// A. Twins
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

   /*

   4                   ===> size (number of coins)
   3 2 1 2             ===> coins      ===> array of size 
   ==================
   output = 2 
   ==================
   how ....?
   ==================
   request :::  المطلوب
   to get the number of coins ===> which make the first brother get coins > second brother

   1 + 2 + 2 + 3 == 8 

   the first brother  = 8 / 2 = 4      ===> (twins)
   the second brother = 8 / 2 = 4      ===> (twins)
   ============================================
   the brother wants to get money gratter thann his brother (get 5 or 6 or 7 or 8)
   ============================================
   3 2 1 2 
   sort array
   1 2 2 3 
   check (left and right)
   1 + 2 + 2 + 3 == 8 
   from left 
   3 + 2 == 5             ===> true   and coin is 2 
   from right
   1 2 2 == 5             ===> false and coin is 3 
   i want the minimum coins to get the biger than his brother 
   
   */
    int coins ;          cin >> coins  ;               // size ;
    int arr[coins] ;
    long long sum  = 0 ;

    for(int i  = 0 ; i < coins  ; i++)
    {
        cin >> arr[i] ;
        sum+= arr[i] ;
    }

    // sorting array 
    sort(arr , arr + coins) ;

    long long result = 0 ;
    long long counter = 0 ;

    for(int i = coins - 1 ; i>=0 ; i--)    // coins - 1   ==> because array start from zero index
    {

        result+=arr[i] ;
        counter++;
        if(result > (sum/2))
        {
            break;
        }

    }

        cout<< counter << endl;

    return 0 ;
}