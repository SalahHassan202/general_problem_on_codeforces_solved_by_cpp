// C. Searching for Graph

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, p;
    cin >> n >> p;
    ll ok = 2 * n + p;
    vector<pair<ll, ll>> v1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i + 1; j <= n; j++)
        {
            v1.push_back({i, j});
        }
    }

    for (ll i = 0; i < ok; i++)
    {
        cout << v1[i].first << " " << v1[i].second << endl;
    }
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