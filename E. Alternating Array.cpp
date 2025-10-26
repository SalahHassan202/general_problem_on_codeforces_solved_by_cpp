// E. Alternating Array

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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll x = 0, y = 0;

    for (int i = 0; i < n; i++)
    {
        // + - + - + - ...
        if ((i % 2 == 0 && a[i] < 0) || (i % 2 == 1 && a[i] > 0))
            x++;
        // - + - + - + ...
        if ((i % 2 == 0 && a[i] > 0) || (i % 2 == 1 && a[i] < 0))
            y++;
    }

    cout << min(x, y);
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
