// A. Keyboard
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
int main ()
{
    /*

    R
    s;;upimrrfod;pbr
    ====================================
    allyouneedislove


    solution ===> R ===> shift to right && L ===> shift to left 
    in keyboard after left one character to the right 
    the output will be 
    allyouneedislove
    ====================================
    ALL KEYPOARD LETTER 
    qwertyuiopasdfghjkl;zxcvbnm,./
    ====================================

    
    */

   char letter ;             cin >> letter ;    // letter is (R) or (L) ===> right or left 
   string keypoard = "qwertyuiopasdfghjkl;zxcvbnm,./" ;             
   string word , finalResult ;
   cin >> word ;

   for(int i = 0 ; i < word.size() ; i++)
   {
       int index =  keypoard.find(word[i]) ;      // get index of all letter that written by user 
       if(letter == 'R')
       {
            finalResult+=keypoard[index-1] ;
       }
       else // (letter == 'L)
       {
            finalResult+=keypoard[index+1] ;
       }
   }
   
    cout<< finalResult <<endl;


    return 0 ;
}