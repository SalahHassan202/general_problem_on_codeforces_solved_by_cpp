// R. LCM Problem

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll x = l;
    ll y = x * 2;
    if (y >= l && y <= r)
        cout << x << " " << y << endl;
    else
        cout << -1 << " " << -1 << endl;
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}