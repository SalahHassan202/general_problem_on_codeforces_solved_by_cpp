// D. Sticks

#include<bits/stdc++.h>
#define ll long long
using namespace std ;

void solve()
{
    ll x , y , z ; cin >> x >> y >> z ;
    if((x+y)> z && (x+z)> y && (y+z)> x)
    cout<<"YES" << endl;
    else
    cout<<"NO"<< endl; 
   
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