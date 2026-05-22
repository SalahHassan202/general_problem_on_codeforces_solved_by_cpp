// B. Niko's Tactical Cards

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
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll mx = 0, mn = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x1 = mx - a[i];
        ll x2 = b[i] - mx;
        ll x3 = mn - a[i];
        ll x4 = b[i] - mn;
        ll x5 = max({x1, x2, x3, x4});
        ll x6 = min({x1, x2, x3, x4});
        mx = x5;
        mn = x6;
    }
    cout << mx << endl;
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