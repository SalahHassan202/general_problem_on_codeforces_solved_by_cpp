// A. 1

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

struct Salah
{
    vector<ll> z;
    ll n;
    Salah(ll size)
    {
        n = size;
        z.assign(n + 1, 0);
    }

    void add(ll d, ll g)
    {
        while (d <= n)
        {
            z[d] += g;
            d += d & -d;
        }
    }

    ll sum(ll d)
    {
        ll s = 0;
        while (d > 0)
        {
            s += z[d];
            d -= d & -d;
        }
        return s;
    }
};

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    Salah r(n);
    ll s = 0;
    for (ll i = 1; i <= n; i++)
    {
        s += (i - 1) - r.sum(v[i] - 1);
        r.add(v[i], 1);
    }
    cout << s << endl;
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