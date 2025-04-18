// A. Next Round
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    long long size , position , counter = 0 ;
    cin >> size >> position ;
    long long arr[size] ;
    for(int i = 0 ; i< size ; i++)
    {
        cin >> arr[i] ;
    }

    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] >= arr[position - 1] && arr[i] > 0)
        {
            counter++ ; 
        }
        else
        {
            break;
        }
    }

    cout<< counter << endl; 

    return 0 ;
}