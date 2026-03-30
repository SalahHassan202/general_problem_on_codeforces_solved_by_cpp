// G. Queue

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
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        mp[a[i]] = i;
    }

    ll mn = 1e18, ans = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        ll x = mp[b[i]];
        if (x > mn)
        {
            ans++;
        }
        mn = min(mn, x);
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}