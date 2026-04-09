// B. Long Jumps

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
    vector<ll> v1(n + 1), dp(n + 2, 0);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v1[i];
    }

    ll ans = 0;
    for (ll i = n; i >= 1; i--)
    {
        dp[i] = v1[i];
        if (i + v1[i] <= n)
        {
            dp[i] += dp[i + v1[i]];
        }

        if (dp[i] > ans)
        {
            ans = dp[i];
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