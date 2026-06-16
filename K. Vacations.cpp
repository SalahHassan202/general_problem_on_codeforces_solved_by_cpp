// K. Vacations

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll n;
vector<ll> v;
ll dp[105][3];

ll salah(ll x, ll y)
{
    if (x == n)
    {
        return 0;
    }
    if (dp[x][y] != -1)
    {
        return dp[x][y];
    }
    ll ans = 1 + salah(x + 1, 0);
    if ((v[x] == 1 || v[x] == 3) && y != 1)
    {
        ans = min(ans, salah(x + 1, 1));
    }
    if ((v[x] == 2 || v[x] == 3) && y != 2)
    {
        ans = min(ans, salah(x + 1, 2));
    }
    return dp[x][y] = ans;
}

void solve()
{
    cin >> n;
    v.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << salah(0, 0) << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}