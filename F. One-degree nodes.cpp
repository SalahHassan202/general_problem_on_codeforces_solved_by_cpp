// F. One-degree nodes

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

map<ll, vector<ll>> g;
map<ll, ll> deg;
vector<ll> ans;
void dfs(ll x, ll p)
{
    ans.push_back(x);
    for (auto to : g[x])
    {
        if (to != p)
        {
            dfs(to, x);
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        deg[a]++;
        deg[b]++;
    }

    ll st = -1;
    for (auto [x, y] : deg)
    {
        if (y == 1)
        {
            st = x;
            break;
        }
    }

    dfs(st, -1);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}