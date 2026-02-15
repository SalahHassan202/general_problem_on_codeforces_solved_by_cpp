// O. New Year Garland

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
        ll r, g, b;
        cin >> r >> g >> b;

        ll mx = max({r, g, b});
        ll sum = r + g + b;
        ll rest = sum - mx;

        if (mx <= rest + 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
int main()
{
    fast;

    solve();

    return 0;
}