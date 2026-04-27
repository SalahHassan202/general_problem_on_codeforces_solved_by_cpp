// E. Cover it!

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

    vector<ll> r(n + 1, -1);

    function<void(ll, ll)> dfs = [&](ll v, ll c)
    {
        r[v] = c;

        for (auto u : d[v])
        {
            if (r[u] == -1)
            {
                dfs(u, c ^ 1);
            }
        }
    };

    dfs(1, 0);

    vector<ll> g0, g1;

    for (ll i = 1; i <= n; i++)
    {
        if (r[i] == 0)
        {
            g0.push_back(i);
        }
        else
        {
            g1.push_back(i);
        }
    }

    if (g0.size() <= g1.size())
    {
        cout << g0.size() << endl;
        for (auto x : g0)
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << g1.size() << endl;
        for (auto x : g1)
        {
            cout << x << " ";
        }
    }

    cout << endl;
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