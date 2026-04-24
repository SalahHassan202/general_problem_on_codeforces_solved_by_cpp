// I. Fedor and New Game

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> x(m + 1);
    for (ll i = 0; i <= m; i++)
    {
        cin >> x[i];
    }

    ll fedor = x[m];
    ll f = 0;
    for (ll i = 0; i < m; i++)
    {
        ll d = x[i] ^ fedor;
        ll c = 0;
        while (d > 0)
        {
            if (d & 1)
            {
                c++;
            }
            d >>= 1;
        }

        if (c <= k)
        {
            f++;
        }
    }
    cout << f << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}