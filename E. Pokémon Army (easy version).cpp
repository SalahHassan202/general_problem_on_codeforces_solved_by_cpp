// E. Pokémon Army (easy version)

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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = a[0];
        for (ll i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                ans = ans + (a[i] - a[i - 1]);
            }
        }

        cout << ans << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}