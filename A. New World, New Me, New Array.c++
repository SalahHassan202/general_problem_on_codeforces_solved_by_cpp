// A. New World, New Me, New Array
#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    ll n , k , p ; 
    cin >> n >> k >> p ;
    ll mx = n*p ; 
    ll mn = -n*p ;

    if(k> mx  || k<mn)
    {
        cout << -1 << endl;
    }
    else
    {
        ll ops = (abs(k) + p -1)/p ;      // ceil
        cout << ops << endl;  
    }
}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
   ll t ; cin >>t ;
   while(t--)
   {
        solve();
   }
    return 0 ;
}