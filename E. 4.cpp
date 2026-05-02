// E. 4

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

bool ok(ll n, ll a)
{
    if (a * 1234567 > n)
    {
        return false;
    }

    ll r = n - a * 1234567;
    for (ll b = 0; b * 123456 <= r; b++)
    {
        ll x = r - b * 123456;
        if (x % 1234 == 0)
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    for (ll a = 0; a * 1234567 <= n; a++)
    {
        if (ok(n, a))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}