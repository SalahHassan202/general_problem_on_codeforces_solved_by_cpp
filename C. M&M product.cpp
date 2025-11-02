// C. M&M product

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

    ll a, b;
    cin >> a >> b;
    ll mn = min({a * b, a * a, b * b});
    ll mx = max({a * b, a * a, b * b});
    cout << mn << " " << mx << endl;
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