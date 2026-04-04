// A. The 67th Integer Problem

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
    cin >> a;
    if (a < 67)
    {
        b = a + 1;
    }
    else
    {
        b = 67;
    }
    cout << b << endl;
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