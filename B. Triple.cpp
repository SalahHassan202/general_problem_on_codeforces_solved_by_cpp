// B. Triple
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int testCases ;        cin >> testCases ;
   
    while(testCases--)
    {
         int size ;           
        cin >> size ;
          int arr[size];

        for(int i = 0 ; i < size ; i++)
        {
            cin >> arr[i] ;
        }

        sort(arr , arr+ size) ;
        int counter = 0 ;
        for(int i = 0 ; i < size ; i++)
        {
            if((arr[i] == arr[i+1]) && (arr[i] == arr[i+2]))
            {
                counter = 1 ; 
                cout<< arr[i]<<endl;
                break;
            }
        }

        if( counter == 0 )
        {
            cout<< -1 << endl;
        }
    }

    
    return 0;
}