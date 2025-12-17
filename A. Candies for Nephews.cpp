// A. Candies for Nephews

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
    ll n  ;             cin >> n  ;
    ll r = n % 3 ;
    if( r == 0)
    cout << 0 << endl;
    else
    cout << 3-r<< endl;
}
int main()
{
    fast;
    ll t = 1 ;
    // cin >> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}
