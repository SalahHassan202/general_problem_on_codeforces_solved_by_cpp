// A. The Rank

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
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ll w, x, y, z;
        cin >> w >> x >> y >> z;
        ll sum = w + x + y + z;
        v[i] = sum;
    }
    ll a = v[1];
    ll ans = 1;
    for (int i = 2; i <= n; i++)
    {
        if (v[i] > a)
            ans++;
    }
    cout << ans;
}

int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}