// M. Maximum Increase

#include<bits/stdc++.h>
#define ll long long
using namespace std ;


void solve()
{
    ll n ; cin >> n ;
    vector<ll>v(n);
    for(int i=0;i<n ;i++)
    {
        cin >>v[i];
    }
    ll cnt = 1 , ans = 1;
    for(int i = 1 ;i<n ;i++)
    {
        if(v[i] > v[i-1])
        cnt++;
        else
        cnt=1 ;

        ans = max(cnt,ans) ;
    }

    
    cout << ans <<endl;
}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    ll t = 1 ;
    //cin >> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}