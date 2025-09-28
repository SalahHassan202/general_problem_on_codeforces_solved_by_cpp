// E. Hit the Lottery

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    
    ll n ; cin>> n ;
    ll cnt = 0 ;

    // 100 
    cnt+=n/100;
    n%=100 ;
    // 100 
    cnt+=n/20;
    n%=20 ;
      // 10
    cnt+=n/10;
    n%=10 ;
    // 5
    cnt+=n/5;
    n%=5;
    // 1
    cnt+=n ;
    

    cout << cnt << endl;
}



int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    ll t = 1 ;
    // cin>> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}