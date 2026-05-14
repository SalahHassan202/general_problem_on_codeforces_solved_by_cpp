// C. Snowfall

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a, b, c, d;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        bool t2 = (x % 2 == 0);
        bool t3 = (x % 3 == 0);

        if (t2 && t3)
        {
            a.push_back(x);
        }
        else if (t2)
        {
            b.push_back(x);
        }
        else if (t3)
        {
            c.push_back(x);
        }
        else
        {
            d.push_back(x);
        }
    }

    for (auto x : a)
    {
        cout << x << " ";
    }
    for (auto x : b)
    {
        cout << x << " ";
    }
    for (auto x : d)
    {
        cout << x << " ";
    }
    for (auto x : c)
    {
        cout << x << " ";
    }
    cout << endl;
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