// A. Sleeping Through Classes

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
    string s;
    cin >> s;
    vector<ll> v(n, 0);
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            for (ll j = i; j <= min(n - 1, i + k); j++)
            {
                v[j] = 1;
            }
        }
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] == 0)
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