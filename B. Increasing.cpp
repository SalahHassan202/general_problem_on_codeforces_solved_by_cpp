// B. Increasing
#include <iostream>
# include <string >
#include <algorithm>
using namespace std;
int main ()
{
    int cases  ;             cin >> cases  ;
   while(cases--)
   {
        int size ;
        cin >> size ;
        int arr[size];

        for(int  i =0 ; i <size ; i++ )
        {
            cin >> arr[i] ;
        }  
        sort(arr , arr+size) ;

   
        bool flag = true ;
        for(int i =0 ; i < size-1 ;i++)       // size - 1  ====>  arr[size ]=4 at compare i will say (arr[4] == arr[5]) (compare arr[i] with arr[i+1])  ===> false // so that i will make the siae ====> size-1 ;
        {
            if(arr[i] == arr[i+1])
            {
                flag = false;
                break;
            }
        }

        if( flag == false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
   }

    
    
    return 0;
}