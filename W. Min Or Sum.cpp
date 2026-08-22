// W. Min Or Sum

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, x = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        x |= a;
    }
    cout << x << endl;
}

int main()
{
    fast;

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}