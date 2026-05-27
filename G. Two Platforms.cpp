// G. Two Platforms

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> x(n), y(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    sort(x.begin(), x.end());
    vector<ll> c(n), m(n + 1, 0);
    ll r = 0;
    for (ll l = 0; l < n; l++)
    {
        while (r < n && x[r] <= x[l] + k)
        {
            r++;
        }
        c[l] = r - l;
    }

    for (ll i = n - 1; i >= 0; i--)
    {
        m[i] = max(m[i + 1], c[i]);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans = max(ans, c[i] + m[i + c[i]]);
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