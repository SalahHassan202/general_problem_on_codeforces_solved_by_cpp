// N. Sort with Step

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> p(n + 1);

        for (ll i = 1; i <= n; i++)
            cin >> p[i];

        ll ok = 0;

        for (ll i = 1; i <= n; i++)
        {
            if ((i - p[i]) % k != 0)
                ok++;
        }

        if (ok == 0)
            cout << 0 << endl;
        else if (ok == 2)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}
int main()
{
    fast;

    solve();

    return 0;
}