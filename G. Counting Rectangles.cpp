// G. Counting Rectangles

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> v1(1001, vector<ll>(1001, 0));
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v1[a][b] += a * b;
    }

    for (ll i = 1; i <= 1000; i++)
    {
        for (ll j = 1; j <= 1000; j++)
        {
            v1[i][j] += v1[i - 1][j] + v1[i][j - 1] - v1[i - 1][j - 1];
        }
    }

    while (q--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll x1 = a + 1;
        ll y1 = b + 1;
        ll x2 = c - 1;
        ll y2 = d - 1;

        if (x1 > x2 || y1 > y2)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = v1[x2][y2] - v1[x1 - 1][y2] - v1[x2][y1 - 1] + v1[x1 - 1][y1 - 1];
            cout << ans << endl;
        }
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