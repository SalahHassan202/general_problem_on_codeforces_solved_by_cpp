// X. MEXor Mixup

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll salah(ll x)
{
    if (x % 4 == 0)
    {
        return x;
    }
    if (x % 4 == 1)
    {
        return 1;
    }
    if (x % 4 == 2)
    {
        return x + 1;
    }

    return 0;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x = salah(a - 1);
    if (x == b)
    {
        cout << a << endl;
    }
    else if ((x ^ b) == a)
    {
        cout << a + 2 << endl;
    }
    else
    {
        cout << a + 1 << endl;
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