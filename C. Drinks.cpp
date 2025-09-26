// C. Drinks

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    ll n ; cin>>n ;
    double sum = 0 ;
    for(int i =0;i<n ;i++)
    {
        ll x ; cin >> x ;
        sum+=x;
    }
    double avg = sum/n ;
    cout <<fixed<<setprecision(12)<< avg << endl;
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