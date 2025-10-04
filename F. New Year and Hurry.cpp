// F. New Year and Hurry

#include<bits/stdc++.h>
#define ll long long
using namespace std ;


void solve()
{
    ll n , m ; cin >> n >> m ; 
    ll k = 240 - m ;     // 4 * 60 = 240 min
    ll ans = 0 , cnt = 0 ;
    for(int i=1;i<=n ;i++)
    {
        ll need = 5*i ; 
        cnt+=need ;
        if(cnt <= k)
        ans++;
        else
        break ;
    }

    cout << ans << endl;
}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    ll t = 1 ;
    // cin >> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}