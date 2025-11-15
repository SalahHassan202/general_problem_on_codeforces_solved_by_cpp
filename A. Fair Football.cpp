// A. Fair Football

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
        ll a, b;
        cin >> a >> b;
        ll sum = a + b;
        ll x = sum / 2;
        ll y = sum - x;

        if (abs(a - b) == (y - x))
            cout << "Ok" << endl;
        else
            cout << x << " " << y << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}