// G. The big matrix

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    for (ll d = 1; d * d <= k; d++)
    {
        if (k % d == 0)
        {
            ll i = d;
            ll j = k / d;

            if (i <= n && j <= n)
                cnt++;

            if (i != j && j <= n && i <= n)
                cnt++;
        }
    }

    cout << cnt << endl;
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