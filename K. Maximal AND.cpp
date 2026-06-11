// K. Maximal AND

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
    vector<ll> a(n);
    vector<ll> v(31, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        for (ll j = 30; j >= 0; j--)
        {
            if (a[i] & (1 << j))
            {
                v[j]++;
            }
        }
    }

    ll ans = 0;
    for (ll j = 30; j >= 0; j--)
    {
        ll ok = n - v[j];
        if (k >= ok)
        {
            k -= ok;
            ans |= (1 << j);
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