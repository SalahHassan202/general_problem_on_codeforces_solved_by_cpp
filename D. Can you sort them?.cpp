// D. Can you sort them?

#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void solve()
{
    
    vector<ll>v(3) ; 
    for(int i=0;i<3 ;i++) cin>>v[i] ;
    sort(v.begin() , v.end());
    for(int i =0;i<3;i++) cout<<v[i]<<" ";


}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    ll t = 1 ;
    //cin>> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}