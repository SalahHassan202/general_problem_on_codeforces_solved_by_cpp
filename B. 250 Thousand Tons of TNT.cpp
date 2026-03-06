// B. 250 Thousand Tons of TNT

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
    vector<ll> a(n + 1, 0);
    vector<ll> p(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
    }

    ll r = 0;
    for (ll k = 1; k <= n; k++)
    {
        if (n % k == 0)
        {
            ll mn = 1e18, mx = -1e18;
            for (ll i = k; i <= n; i += k)
            {
                ll s = p[i] - p[i - k];
                if (s < mn)
                {
                    mn = s;
                }

                if (s > mx)
                {
                    mx = s;
                }
            }
            if (mx - mn > r)
            {
                r = mx - mn;
            }
        }
    }
    cout << r << endl;
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