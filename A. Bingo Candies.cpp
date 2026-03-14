// A. Bingo Candies

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
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
    }

    if (n == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        ll f = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > (n * n - n))
            {
                f = 1;
            }
        }

        if (f == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
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