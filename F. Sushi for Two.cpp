// F. Sushi for Two

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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<ll> g;
    ll cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            cnt++;
        }
        else
        {
            g.push_back(cnt);
            cnt = 1;
        }
    }
    g.push_back(cnt);

    ll ans = 0;
    for (int i = 0; i + 1 < (int)g.size(); i++)
    {
        ans = max(ans, 2 * min(g[i], g[i + 1]));
    }

    cout << ans;
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}