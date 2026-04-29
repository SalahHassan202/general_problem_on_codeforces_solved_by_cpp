// J. Johnny and His Hobbies

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
    vector<ll> a(n);
    vector<bool> v(1025, false);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        v[a[i]] = true;
    }

    for (ll k = 1; k < 1024; k++)
    {
        bool ok = true;
        for (ll i = 0; i < n; i++)
        {
            ll res = a[i] ^ k;
            if (res > 1024 || !v[res])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << k << endl;
            return;
        }
    }
    cout << -1 << endl;
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