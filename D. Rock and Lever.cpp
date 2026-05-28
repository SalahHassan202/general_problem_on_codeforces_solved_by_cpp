// D. Rock and Lever

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll salah(ll x)
{
    ll p = 0;
    while (x)
    {
        p++;
        x >>= 1;
    }
    return p;
}

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        mp[salah(x)]++;
    }
    ll ans = 0;
    for (auto [x, y] : mp)
    {
        ans += y * (y - 1) / 2;
    }
    cout << ans << endl;
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