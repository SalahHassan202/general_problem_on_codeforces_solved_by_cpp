// A. In Search of an Easy Problem

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, x;
    cin >> n;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 1)
        {
            ok = true;
        }
    }
    cout << (ok ? "HARD" : "EASY");
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