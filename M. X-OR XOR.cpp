// M. X-OR XOR

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x = 0;
    for (ll i = 0; i < 61; i++)
    {
        ll bitA = (a >> i) & 1;
        ll bitB = (b >> i) & 1;
        if (bitA == 0 && bitB == 1)
        {
            cout << -1 << endl;
            return;
        }

        if (bitA == 1 && bitB == 0)
        {
            x |= (1LL << i);
        }
    }
    cout << x << endl;
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