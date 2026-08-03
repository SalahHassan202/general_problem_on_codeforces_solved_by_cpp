// R. Divine Array

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
    vector<vector<ll>> v1;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    v1.push_back(a);
    while (true)
    {
        vector<ll> f(n + 1, 0);
        for (auto x : a)
        {
            f[x]++;
        }
        vector<ll> b(n);
        for (ll i = 0; i < n; i++)
        {
            b[i] = f[a[i]];
        }

        if (b == a)
        {
            v1.push_back(b);
            break;
        }
        v1.push_back(b);
        a = b;
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll x, k;
        cin >> x >> k;
        k = min(k, (ll)v1.size() - 1);
        cout << v1[k][x - 1] << endl;
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