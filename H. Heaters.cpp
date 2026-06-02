// H. Heaters

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, r;
    cin >> n >> r;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans = 0, c = 0;
    while (c < n)
    {
        ll p = -1;
        ll g = min(n - 1, c + r - 1);
        ll f = max(0LL, c - r + 1);
        for (ll i = g; i >= f; i--)
        {
            if (v[i] == 1)
            {
                p = i;
                break;
            }
        }

        if (p == -1)
        {
            cout << -1 << endl;
            return;
        }
        ans++;
        c = p + r;
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}