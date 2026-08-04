// R. Restoring Table

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
    vector<ll> a(n, 0);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll b;
            cin >> b;
            if (i != j)
            {
                a[i] |= b;
            }
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cout << a[i];
        if (i != n - 1)
        {
            cout << " ";
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}