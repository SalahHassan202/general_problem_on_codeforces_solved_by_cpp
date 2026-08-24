// W. Seating Arrangements (easy version)

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
    vector<pair<ll, ll>> v1(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> v1[i].first;
        v1[i].second = i;
    }

    sort(v1.begin(), v1.end());
    vector<ll> v2(m);
    for (ll i = 0; i < m;)
    {
        ll j = i;
        while (j < m && v1[j].first == v1[i].first)
        {
            j++;
        }
        reverse(v1.begin() + i, v1.begin() + j);
        i = j;
    }

    for (ll i = 0; i < m; i++)
    {
        v2[v1[i].second] = i;
    }

    ll ans = 0;
    vector<ll> ok(m, 0);
    for (ll i = 0; i < m; i++)
    {
        ll p = v2[i];
        for (ll j = 0; j < p; j++)
        {
            if (ok[j])
            {
                ans++;
            }
        }
        ok[p] = 1;
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