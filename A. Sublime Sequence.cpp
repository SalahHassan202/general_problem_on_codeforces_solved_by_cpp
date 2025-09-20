// A. Sublime Sequence

#include<bits/stdc++.h>
#define ll long long
using namespace std ;

int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
   ll t ; cin >>t ;
   while(t--)
   {
        ll x , n ; 
        cin >> x >>n ;
        if(n % 2 ==0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << x << endl;
        }

   }
    return 0 ;
}