// J. K for the Price of One (Hard Version)

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, p, k;
    cin >> n >> p >> k;
    vector<ll> v(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin() + 1, v.end());
    vector<ll> dp(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1] + v[i];
        if (i >= k)
        {
            dp[i] = min(dp[i], dp[i - k] + v[i]);
        }
    }

    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (dp[i] <= p)
        {
            ans = i;
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