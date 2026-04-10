// B. Valid BFS?

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll p[200005];
bool salah(ll a, ll b)
{
    return p[a] < p[b];
}

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> d(n + 1);
    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        d[u].push_back(v);
        d[v].push_back(u);
    }

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        p[a[i]] = i;
    }

    if (a[0] != 1)
    {
        cout << "No" << endl;
        return;
    }

    for (ll i = 1; i <= n; i++)
    {
        sort(d[i].begin(), d[i].end(), salah);
    }

    vector<ll> f;
    vector<bool> v(n + 1, false);
    queue<ll> q;
    q.push(1);
    v[1] = true;
    while (!q.empty())
    {
        ll c = q.front();
        q.pop();
        f.push_back(c);
        for (ll g : d[c])
        {
            if (!v[g])
            {
                v[g] = true;
                q.push(g);
            }
        }
    }

    if (f == a)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}