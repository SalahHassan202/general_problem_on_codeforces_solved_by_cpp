// M. Boats Competition

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
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans = 0;
    for (ll s = 2; s <= 2 * n; s++)
    {
        vector<ll> f(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            f[v[i]]++;
        }

        ll c = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll j = s - i;
            if (j < 1 || j > n)
            {
                continue;
            }

            if (i == j)
            {
                c += f[i] / 2;
            }
            else if (i < j)
            {
                c += min(f[i], f[j]);
            }
        }
        ans = max(ans, c);
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