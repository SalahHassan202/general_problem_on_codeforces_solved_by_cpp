// J. 2^Sort

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
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    vector<ll> v2(n, 0);
    for (ll i = 0; i < n - 1; i++)
    {
        if (v1[i] < 2 * v1[i + 1])
        {
            v2[i] = 1;
        }
    }

    vector<ll> v3(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        v3[i] = v3[i - 1] + v2[i - 1];
    }

    ll ans = 0;
    for (ll i = 0; i + k < n; i++)
    {
        ll x = v3[i + k] - v3[i];
        if (x == k)
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