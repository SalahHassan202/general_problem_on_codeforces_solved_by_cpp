// Y. Iva & Pav

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
    vector<ll> v(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<vector<ll>> v2(n + 1, vector<ll>(20));
    for (ll i = 1; i <= n; i++)
    {
        v2[i][0] = v[i];
    }

    for (ll j = 1; j < 20; j++)
    {
        for (ll i = 1; i + (1 << j) - 1 <= n; i++)
        {
            v2[i][j] = v2[i][j - 1] & v2[i + (1 << (j - 1))][j - 1];
        }
    }
    auto it = [&](ll l, ll r)
    {
        ll res = v[l];
        for (ll j = 19; j >= 0; j--)
        {
            if ((1 << j) <= r - l + 1)
            {
                res &= v2[l][j];
                l += (1 << j);
            }
        }
        return res;
    };

    ll q;
    cin >> q;
    while (q--)
    {
        ll l, k;
        cin >> l >> k;
        ll lo = l, hi = n, ans = -1;
        while (lo <= hi)
        {
            ll md = (lo + hi) / 2;

            if (it(l, md) >= k)
            {
                ans = md;
                lo = md + 1;
            }
            else
            {
                hi = md - 1;
            }
        }
        cout << ans << " ";
    }
    cout << endl;
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