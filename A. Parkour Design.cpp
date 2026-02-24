// A. Parkour Design

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

    ll z = x - 2 * y;

    if (z >= 0 && z % 3 == 0)
    {
        if (y >= 0)
        {
            if (x >= 2 * y)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (x >= 4 * abs(y))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    else
    {
        cout << "NO" << endl;
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