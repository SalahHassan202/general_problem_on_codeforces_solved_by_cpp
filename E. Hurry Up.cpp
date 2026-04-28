// E. Hurry Up

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (y == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << x % y << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}