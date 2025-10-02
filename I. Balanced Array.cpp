// I. Balanced Array

#include<bits/stdc++.h>
#define ll long long
using namespace std ;


void solve()
{
    ll n ; cin >> n ;
    ll cnt=2 ;
    if((n/2)%2 == 0)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n/2 ; i++)
        {
            cout <<cnt<<" ";
            cnt+=2;
        }
        cnt=1 ;
        for(int i=0;i<(n/2)-1 ;i++)
        {
            cout<<cnt<< " ";
            cnt+=2 ;
        }
        cout<<cnt+(n/2) <<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
   
   
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