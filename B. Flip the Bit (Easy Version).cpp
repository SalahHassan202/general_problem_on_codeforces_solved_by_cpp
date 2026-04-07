// B. Flip the Bit (Easy Version)

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }

    ll j;
    cin >> j;
    j--;
    ll x = a[j];
    ll l = 0;
    bool ok = false;
    for (ll i = j - 1; i >= 0; i--)
    {
        if (a[i] != x && !ok)
        {
            l++;
            ok = true;
        }
        else if (a[i] == x)
        {
            ok = false;
        }
    }

    ll r = 0;
    ok = false;
    for (ll i = j + 1; i < n; i++)
    {
        if (a[i] != x && !ok)
        {
            r++;
            ok = true;
        }
        else if (a[i] == x)
        {
            ok = false;
        }
    }
    cout << 2 * max(l, r) << endl;
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