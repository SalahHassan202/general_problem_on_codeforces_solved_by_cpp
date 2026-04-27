// P. Preparing Olympiad

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<ll> c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    ll ans = 0;
    for (ll i = 0; i < (1 << n); i++)
    {
        ll sum = 0, mn = 2e6, mx = 0, cnt = 0;
        for (ll j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                sum += c[j];
                mn = min(mn, c[j]);
                mx = max(mx, c[j]);
                cnt++;
            }
        }
        if (cnt >= 2 && sum >= l && sum <= r && (mx - mn) >= x)
        {
            ans++;
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