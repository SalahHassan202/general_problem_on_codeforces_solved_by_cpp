// A. Pizza, Pizza, Pizza!!!

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
    ll n ; cin >> n ; 
    ll k = n+1 ;
    if(k==1)
    cout << 0 << endl;
    else if(k%2==0)
    cout << k/2 << endl;
    else
    cout<< k << endl;

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