// A. Zhily and Array Operating

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

    for (ll i = n - 2; i >= 0; i--)
    {
        if (v[i + 1] > 0)
        {
            v[i] += v[i + 1];
        }
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            ans++;
        }
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