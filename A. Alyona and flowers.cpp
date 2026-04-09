// A. Alyona and Flowers

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
    vector<ll> v1(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v1[i];
    }

    vector<ll> v2(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        v2[i] = v2[i - 1] + v1[i];
    }

    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        ll l, r;
        cin >> l >> r;
        ll s = v2[r] - v2[l - 1];
        if (s > 0)
        {
            ans += s;
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