// G. Journey

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

vector<ll> g[100005];
double dfs(ll x, ll p, double d)
{
    ll c = 0;
    for (auto to : g[x])
    {
        if (to != p)
        {
            c++;
        }
    }
    if (c == 0)
    {
        return d;
    }

    double ans = 0;
    for (auto to : g[x])
    {
        if (to != p)
        {
            ans += dfs(to, x, d + 1) / c;
        }
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        g[i].clear();
    }

    for (ll i = 0; i < n - 1; i++)
    {
        ll a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    cout << fixed << setprecision(15) << dfs(1, -1, 0) << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}