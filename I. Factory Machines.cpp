// I. Factory Machines

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll l = 0, h = 1e18, ans = 1e18;
    while (l <= h)
    {
        ll m = l + (h - l) / 2;
        ll p = 0;
        for (ll i = 0; i < n; i++)
        {
            p += (m / v[i]);
            if (p >= t)
            {
                break;
            }
        }

        if (p >= t)
        {
            ans = m;
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}