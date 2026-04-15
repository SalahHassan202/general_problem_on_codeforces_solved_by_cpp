// D. Degree of node in Connected Components

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
    vector<vector<ll>> d(n + 1);
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        d[u].push_back(v);
        d[v].push_back(u);
    }

    vector<bool> s(n + 1, false);
    ll ans = 0;
    function<void(ll, bool &)> dfs = [&](ll v, bool &ok)
    {
        s[v] = true;

        if (d[v].size() != 2)
        {
            ok = false;
        }

        for (auto u : d[v])
        {
            if (!s[u])
            {
                dfs(u, ok);
            }
        }
    };

    for (ll i = 1; i <= n; i++)
    {
        if (!s[i])
        {
            bool ok = true;
            dfs(i, ok);

            if (ok)
            {
                ans++;
            }
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