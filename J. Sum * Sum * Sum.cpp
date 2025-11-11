// J. Sum * Sum * Sum

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    bool found = false;
    for (ll a = 1;; a++)
    {
        ll a3 = a * a * a;
        if (a3 > x)
            break;

        ll r = x - a3;

        ll b = round(cbrt(r));

        if (b >= 1 && b * b * b == r)
        {
            found = true;
            break;
        }
    }

    if (found)
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