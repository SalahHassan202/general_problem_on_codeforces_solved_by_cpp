// P08. Cashier

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, l, a;
    cin >> n >> l >> a;
    ll t, d;
    ll c = 0, ans = 0;

    while (n--)
    {
        cin >> t >> d;

        ll f = t - c;
        if (f > 0)
        {
            ans += f / a;
        }

        c = t + d;
    }

    if (c < l)
    {
        ans += (l - c) / a;
    }

    cout << ans << "\n";
}

int main()
{
    fast;

    solve();

    return 0;
}