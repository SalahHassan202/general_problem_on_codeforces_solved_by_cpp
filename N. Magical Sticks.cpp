// N. Magical Sticks

#include<bits/stdc++.h>
#define ll long long
using namespace std ;


void solve()
{
    ll n ; cin >> n ;
    if(n%2==0)
    cout<<n/2<<endl;
    else
    {
        n++; 
        cout<<n/2<<endl;
    }
}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    ll t = 1 ;
    cin >> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}