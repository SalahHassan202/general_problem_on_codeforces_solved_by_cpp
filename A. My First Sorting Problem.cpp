// A. My First Sorting Problem
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

int main()
{
    int t ;               cin >> t ;
    int arr[2] ;
    while(t--)
    {
        for(int i = 0 ; i <=1 ; i++)
        {
            cin >>arr[i] ;
        }
        sort(arr , arr+2) ;
       
        for(int i = 0 ; i <=1 ; i++)
        {
            cout << arr[i] << " " ;
        }
        cout << endl;

    }

    return 0 ;
}