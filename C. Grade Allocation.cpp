// C. Grade Allocation

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    ll s = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        s += v[i];
    }

    ll x = s;
    ll mx = m;
    ll ans = min(mx, x);
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