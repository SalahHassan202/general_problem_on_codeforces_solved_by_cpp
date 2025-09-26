// B. Queue at the School

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    ll n , t ; cin>> n>>t ;
    string s ; cin >> s ;
    while(t--)
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i] == 'B'&&s[i+1]=='G')
            {
                swap(s[i] , s[i+1]) ;
                i++;
            }
        }
    }
    cout << s<< endl;
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