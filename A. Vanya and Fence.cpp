// A. Vanya and Fence
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main ()
{
   /*
    number of girls are walking along the fence of height h and they do not want the guard to notice them ;
    if (the girl hight > wall hight )
    {
        guard notice them 
    }
    else
    {
        guard don't notice them 
    }
    
    if girl hight <= wall hight     ===>     width===>  +1 
    if girl hight > wall hight      ===>      width===>  +2
    
    
    */

   long long no_of_girls ,  hight  , num , res = 0;
   cin >> no_of_girls >> hight ;
   while(no_of_girls--)
   {
        cin >> num ; 
        
        if(num <= hight)
        {
            res++ ;
        }
        else   // (num > hight)
        {
            res+=2 ; 
        }
        
   }

    cout<< res << endl;


    return 0;
}