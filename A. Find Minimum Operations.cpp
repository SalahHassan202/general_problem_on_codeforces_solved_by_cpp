// A. Find Minimum Operations

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
    if (k == 1)
    {
        cout << n << endl;
        return;
    }

    ll ans = 0;
    while (n > 0)
    {
        ans += n % k;
        n /= k;
    }
    cout << ans << endl;
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