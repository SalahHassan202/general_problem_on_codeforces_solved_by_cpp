// F. The 67th Tree Problem

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll n = x + y;
    bool ok = true;
    if (n % 2 == 1)
    {
        ll m = (n + 1) / 2;
        if (y < m)
        {
            ok = false;
        }
    }
    else
    {
        if (x < 1)
        {
            ok = false;
        }
        if (y < n / 2)
        {
            ok = false;
        }
    }

    if (ok == false)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;

        ll c, d;
        if (n % 2 == 1)
        {
            c = 2 * x + 1;
            d = y - x - 1;
        }
        else
        {
            c = 2 * x;
            d = y - x;
        }

        for (ll i = 1; i < c; i++)
        {
            cout << i << " " << i + 1 << endl;
        }

        for (ll i = 0; i < d; i++)
        {
            cout << 1 << " " << c + 1 + i << endl;
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