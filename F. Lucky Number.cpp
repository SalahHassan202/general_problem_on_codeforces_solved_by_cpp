// F. Lucky Number
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
    ll mx = 0, mn = 9;
    while (n > 0)
    {
        ll d = n % 10;
        mx = max(mx, d);
        mn = min(mn, d);
        n /= 10;
    }

    ll diff = mx - mn;
    if (diff == 4 || diff == 7)
        cout << "YES";
    else
        cout << "NO";
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