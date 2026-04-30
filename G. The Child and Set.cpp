// G. The Child and Set

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

int lowbit(int x)
{
    return x & -x;
}

void solve()
{
    ll s, m;
    cin >> s >> m;
    vector<pair<ll, ll>> v;

    for (ll i = 1; i <= m; i++)
    {
        v.push_back({lowbit(i), i});
    }
    sort(v.rbegin(), v.rend());
    vector<ll> res;
    for (auto &p : v)
    {
        if (p.first <= s)
        {
            s -= p.first;
            res.push_back(p.second);
        }
    }

    if (s == 0)
    {
        cout << res.size() << endl;
        for (ll i = 0; i < res.size(); i++)
        {
            cout << res[i] << (i == res.size() - 1 ? "" : " ");
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}