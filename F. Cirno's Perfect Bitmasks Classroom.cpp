// F. Cirno's Perfect Bitmasks Classroom

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

bool salah(ll x)
{
    return (x & (x - 1)) == 0;
}

void solve()
{
    ll x;
    cin >> x;
    if (x == 1)
    {
        cout << 3 << endl;
        return;
    }

    if (salah(x))
    {
        cout << x + 1 << endl;
        return;
    }

    ll y = 1;
    while ((x & y) == 0)
    {
        y <<= 1;
    }
    cout << y << endl;
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