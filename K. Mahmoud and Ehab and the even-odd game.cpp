// K. Mahmoud and Ehab and the even-odd game

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    
    ll n ; cin >> n ;
    if(n%2==0)//even
    cout<<"Mahmoud";
    else 
    cout<<"Ehab";
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