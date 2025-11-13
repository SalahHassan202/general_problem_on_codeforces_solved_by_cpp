// D. Chrome Tabs

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, t, a = 0, b = 0;
    cin >> n >> t;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            a++;
        else if (v[i] == 0)
            b++;
    }
    ll mx = 0;

    for (int i = 1; i <= t; i++)
    {
        ll c = 0, d = 0;
        for (int s = i; s <= n; s += t)
        {
            if (v[s] == 1)
                c++;
            else
                d++;
        }

        ll x = a - c;
        ll y = b - d;

        ll z = abs(x - y);
        mx = max(z, mx);
    }
    cout << mx << endl;
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