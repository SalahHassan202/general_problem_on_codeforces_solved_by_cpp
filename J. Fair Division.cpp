// J. Fair Division

#include<bits/stdc++.h>
#define ll long long
using namespace std ;


void solve()
{
    ll n ; cin >> n ;
    ll one=0 , two=0 ;
    for(int i =0;i<n;i++)
    {
        ll x ; cin >> x ; 
        if(x==1) one++;
        else two++;
    }

    if(one%2==0 && two%2==0)
    {
        cout<<"YES"<<endl;
    }
    else if(one%2==0 &&two%2!=0 &&one>=2)
    {
        cout<<"YES" <<endl;
    }
    else
    {
        cout <<"NO" <<endl;
    }

}
int main()
{
    // fast code
    ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(0);
    
    ll t = 1 ;
    cin >> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}