// A. Balanced Rating Changes
#include <iostream>
#include <string>
#include <iomanip>                                  //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;

int main()
{
   
    long long size ;             // number of people or participants
    cin >> size ;
    long long arr[size] ;

    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i] ;
    }

    bool flag = 0 ;

    for(int i = 0 ; i < size ; i++)
    {
        
        double answer = (double)arr[i] / 2 ;          // casting 
        if(arr[i]  % 2 == 0)          // even
        {
            arr[i] = arr[i]  / 2 ;
        }
        else
        {
            if(flag == 0) 
            {
                arr[i] = ceil(answer) ;
                flag = 1 ;
            } 
            else
            {
                arr[i] =  floor(answer) ;
                flag = 0 ; 
            }        
        }
    }

    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << endl;
    }

   
    return 0 ;
}