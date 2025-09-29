// L. Legs

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    ll n ; cin>> n ;
    ll cnt = 0 ;
    cnt+=n/4;
    n%=4;
    cnt+=n/2;
    cout<< cnt<<endl;

}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    ll t = 1 ;
    cin>> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}