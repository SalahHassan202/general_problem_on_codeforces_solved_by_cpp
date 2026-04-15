// C. Is Parent same?

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
    vector<vector<ll>> adj(n + 1);
    for (ll i = 2; i <= n; i++)
    {
        ll p;
        cin >> p;
        adj[p].push_back(i);
        adj[i].push_back(p);
    }

    vector<ll> c(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> c[i];
    }

    ll ans = 0;
    function<void(ll, ll, ll)> dfs = [&](ll v, ll p, ll h)
    {
        if (c[v] != h)
        {
            ans++;
        }

        for (auto u : adj[v])
        {
            if (u == p)
            {
                continue;
            }
            dfs(u, v, c[v]);
        }
    };
    dfs(1, -1, 0);
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}