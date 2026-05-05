// A. A

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
    vector<vector<ll>> d(n, vector<ll>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> d[i][j];
        }
    }

    for (ll i = 0; i < n; i++)
    {
        if (d[i][i] != 0)
        {
            cout << "NO" << endl;
            return;
        }
        for (ll j = i + 1; j < n; j++)
        {
            if (d[i][j] != d[j][i] || d[i][j] == 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    vector<ll> m1(n, (ll)1e18);
    vector<bool> ok(n, 0);
    m1[0] = 0;
    ll tot = 0;
    for (ll i = 0; i < n; i++)
    {
        ll v = -1;
        for (ll j = 0; j < n; j++)
        {
            if (!ok[j] && (v == -1 || m1[j] < m1[v]))
            {
                v = j;
            }
        }
        ok[v] = 1;
        tot += m1[v];
        for (ll to = 0; to < n; to++)
        {
            if (!ok[to] && d[v][to] < m1[to])
            {
                m1[to] = d[v][to];
            }
        }
    }

    vector<vector<pair<ll, ll>>> g(n);
    vector<ll> m2(n, (ll)1e18);
    vector<bool> u(n, 0);
    vector<ll> p(n, -1);
    m2[0] = 0;
    for (ll i = 0; i < n; i++)
    {
        ll v = -1;
        for (ll j = 0; j < n; j++)
        {
            if (!u[j] && (v == -1 || m2[j] < m2[v]))
            {
                v = j;
            }
        }

        u[v] = 1;
        if (p[v] != -1)
        {
            g[v].push_back({p[v], m2[v]});
            g[p[v]].push_back({v, m2[v]});
        }

        for (ll to = 0; to < n; to++)
        {
            if (!u[to] && d[v][to] < m2[to])
            {
                m2[to] = d[v][to];
                p[to] = v;
            }
        }
    }

    for (ll i = 0; i < n; i++)
    {
        vector<ll> r(n, -1);
        queue<ll> q;
        r[i] = 0;
        q.push(i);
        while (!q.empty())
        {
            ll v = q.front();
            q.pop();
            for (auto [to, w] : g[v])
            {
                if (r[to] == -1)
                {
                    r[to] = r[v] + w;
                    q.push(to);
                }
            }
        }

        for (ll j = 0; j < n; j++)
        {
            if (r[j] != d[i][j])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}