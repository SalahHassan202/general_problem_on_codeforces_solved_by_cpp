// L. Vasya and Power

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    // while(n%2==0 && n>1)
    // {
    //     n/=2 ;
    // }

    // if(n == 1)
    // cout << "yes";
    // else
    // cout <<"no" ;

    if ((n & (n - 1)) == 0)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}