// E. King's Path

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

map<pair<ll, ll>, ll> mp;
set<pair<ll, ll>> st;
ll dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
ll dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void solve()
{
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll r, a, b;
        cin >> r >> a >> b;
        for (ll j = a; j <= b; j++)
        {
            st.insert({r, j});
        }
    }
    queue<pair<ll, ll>> q;
    q.push({x1, y1});
    mp[{x1, y1}] = 0;
    while (!q.empty())
    {
        auto c = q.front();
        q.pop();
        ll x = c.first;
        ll y = c.second;
        if (x == x2 && y == y2)
        {
            cout << mp[{x, y}] << endl;
            return;
        }

        for (ll i = 0; i < 8; i++)
        {
            ll w = x + dx[i];
            ll z = y + dy[i];
            if (st.count({w, z}) && !mp.count({w, z}))
            {
                mp[{w, z}] = mp[{x, y}] + 1;
                q.push({w, z});
            }
        }
    }
    cout << -1 << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}