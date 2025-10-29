// A. Square?
#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == b && a == c && a == d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    fast;

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}