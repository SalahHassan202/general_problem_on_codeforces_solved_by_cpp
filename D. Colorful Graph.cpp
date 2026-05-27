// D. Colorful Graph

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
    vector<ll> g(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> g[i];
    }
    map<ll, set<ll>> mp;
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        if (g[u] != g[v])
        {
            mp[g[u]].insert(g[v]);
            mp[g[v]].insert(g[u]);
        }
    }
    ll ans = 1e18, f = -1;
    for (ll i = 1; i <= n; i++)
    {
        ll c = g[i];
        ll h = mp[c].size();
        if (h > f)
        {
            f = h;
            ans = c;
        }
        else if (h == f)
        {
            ans = min(ans, c);
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