// K. Sport Mafia

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
    ll l = 0, h = n, ans = 0;
    while (l <= h)
    {
        ll e = l + (h - l) / 2;
        ll p = n - e;
        ll tot = (p * (p + 1)) / 2;

        if (tot - e == k)
        {
            ans = e;
            break;
        }
        else if (tot - e > k)
        {
            l = e + 1;
        }
        else
        {
            h = e - 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}