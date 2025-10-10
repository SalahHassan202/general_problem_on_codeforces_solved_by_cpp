// A. Turtle and Good Strings

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
    ll n ; cin >> n ;
    string s ; cin >> s ;
    
    for(int i= 0; i<n; i++)
    {
        if(s[i]!=s[n-i-1])
        {
            cout <<"Yes" << endl;
            return ;
        }
        else
        {
            cout << "no" << endl;
            return ;
        }
    }

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