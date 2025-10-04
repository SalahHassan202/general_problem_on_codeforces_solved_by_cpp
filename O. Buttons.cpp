// O. Buttons

#include<bits/stdc++.h>
#define ll long long
using namespace std ;


void solve()
{
    ll a , b , c ;   cin>> a >> b >> c ;
    if(c%2 == 0)
    {
        a+=c/2;
        b+=c/2;
    }
    else
    {
        a++;
        c--;
        a+=c/2;
        b+=c/2;
    }

    if(a>b)
    cout<<"First"<< endl;
    else
    cout<<"Second"<< endl;
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