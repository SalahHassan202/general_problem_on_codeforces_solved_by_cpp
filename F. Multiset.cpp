// F. Multiset

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

bool ok(vector<ll> v1, ll k)
{
    multiset<ll> ms;
    for (auto x : v1)
    {
        ms.insert(x);
    }

    for (ll i = 1; i <= k; i++)
    {
        ll e = k - i + 1;
        auto it = ms.upper_bound(e);
        if (it == ms.begin())
        {
            return false;
        }
        it--;
        ms.erase(it);
        if (!ms.empty())
        {
            auto it2 = ms.begin();
            ll x = *it2;
            ms.erase(it2);
            ms.insert(x + e);
        }
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    ll ans = 0;
    for (ll k = 0; k <= n; k++)
    {
        if (ok(v1, k))
        {
            ans = k;
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