// D. Cool Char
#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    char c;
    cin >> c;
    ll ans = c;
    if (ans % 2 == 0)
        cout << "even";
    else
        cout << "odd";
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