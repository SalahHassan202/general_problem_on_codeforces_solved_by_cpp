// A. Perpendicular Segments

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    ll m = min(x, y);
    cout << "0 0 " << m << " " << m << endl;
    cout << "0 " << m << " " << m << " 0" << endl;
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
