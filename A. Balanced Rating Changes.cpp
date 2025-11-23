// A. Balanced Rating Changes

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll size ;             // number of people or participants
    cin >> size ;
    ll arr[size] ;

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
   
}
int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
