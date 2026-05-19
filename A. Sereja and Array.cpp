// A. Sereja and Array

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    ll d = 0;
    while (m--)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll z, x;
            cin >> z >> x;
            v[z] = x - d;
        }
        else if (t == 2)
        {
            ll x;
            cin >> x;
            d += x;
        }
        else
        {
            ll z;
            cin >> z;
            cout << v[z] + d << endl;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}