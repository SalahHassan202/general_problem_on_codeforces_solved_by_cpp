// A. Even Subset Sum Problem

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
    vector<ll> v(n);
    ll idx = -1;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0 && idx == -1)
        {
            idx = i;
        }
    }

    if (idx != -1)
    {
        cout << 1 << endl;
        cout << idx + 1 << endl;
        return;
    }

    if (n >= 2)
    {
        cout << 2 << endl;
        cout << 1 << " " << 2 << endl;
        return;
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