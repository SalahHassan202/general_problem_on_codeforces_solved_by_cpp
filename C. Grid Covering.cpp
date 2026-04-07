// C. Grid Covering

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void solve()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    ll g1 = gcd(a, n);
    ll g2 = gcd(b, m);
    ll g3 = gcd(n, m);

    if (g1 != 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (g2 != 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (g3 == 1 || g3 == 2)
    {
        cout << "YES" << endl;
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