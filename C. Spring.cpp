// C. Spring

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll salah(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll hassan(ll a, ll b, ll m)
{
    if (a > m || b > m)
    {
        return m + 1;
    }
    ll x = salah(a, b);
    ll y = a / x;
    if (m / y < b)
    {
        return m + 1;
    }
    return y * b;
}

void solve()
{
    ll a, b, c, m;
    cin >> a >> b >> c >> m;
    ll x = m / a;
    ll y = m / b;
    ll z = m / c;

    ll d = hassan(a, b, m);
    ll e = hassan(a, c, m);
    ll f = hassan(b, c, m);
    ll h = hassan(d, c, m);

    ll k = m / h;
    ll p = (m / d) - k;
    ll q = (m / e) - k;
    ll r = (m / f) - k;
    ll s = x - p - q - k;
    ll t = y - p - r - k;
    ll u = z - q - r - k;
    ll r1 = s * 6 + p * 3 + q * 3 + k * 2;
    ll r2 = t * 6 + p * 3 + r * 3 + k * 2;
    ll r3 = u * 6 + q * 3 + r * 3 + k * 2;

    cout << r1 << " " << r2 << " " << r3 << endl;
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