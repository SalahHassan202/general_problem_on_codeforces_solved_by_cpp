// O. Really Big Numbers

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll salah(ll x)
{
    ll s = 0;
    while (x)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

void solve()
{
    ll n, s;
    cin >> n >> s;
    ll l = 1, r = n, ans = n + 1;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (m - salah(m) >= s)
        {
            ans = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }

    if (ans == n + 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << n - ans + 1 << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}