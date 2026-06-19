// Q. And It's Non-Zero

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const ll MAX = 200005;
ll pref[MAX][20];

void salah()
{
    for (ll i = 1; i < MAX; i++)
    {
        for (ll j = 0; j < 20; j++)
        {
            pref[i][j] = pref[i - 1][j] + ((i >> j) & 1);
        }
    }
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll mx = 0;
    for (ll j = 0; j < 20; j++)
    {
        ll b = pref[r][j] - pref[l - 1][j];
        mx = max(mx, b);
    }
    cout << (r - l + 1) - mx << endl;
}

int main()
{
    fast;

    salah();

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}