// F. Modified GCD

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll gcd(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll g = gcd(a, b);
    vector<ll> d;
    for (ll i = 1; i * i <= g; i++)
    {
        if (g % i == 0)
        {
            d.push_back(i);
            if (i * i != g)
            {
                d.push_back(g / i);
            }
        }
    }
    sort(d.begin(), d.end());
    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        auto it = upper_bound(d.begin(), d.end(), r);

        if (it != d.begin())
        {
            it--;
            if (*it >= l)
            {
                cout << *it << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}