// A. Standard BFS

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
    vector<set<ll>> ok(n + 1);
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        if (u != v)
        {
            ok[u].insert(v);
            ok[v].insert(u);
        }
    }

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    vector<bool> s(n + 1, false);
    vector<ll> res;
    pq.push(1);
    s[1] = true;
    while (!pq.empty())
    {
        ll c = pq.top();
        pq.pop();
        res.push_back(c);
        for (ll g : ok[c])
        {
            if (!s[g])
            {
                s[g] = true;
                pq.push(g);
            }
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cout << res[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}