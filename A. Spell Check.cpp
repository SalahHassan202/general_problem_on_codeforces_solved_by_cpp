// A. Spell Check

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
    ll n ; cin >> n ;
    string name = "Timur" ; 
    sort(name.begin() , name.end());

    string s ; cin >> s ;
    sort(s.begin() , s.end()) ;

    cout << (s== name ? "YES" : "NO") << endl;
}
int main()
{
    fast;
    
    ll t = 1 ;
    cin >> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}