// A. Tram
#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    // Stop 1: 0 exit, 3 enter ==> current = 3
    // Stop 2: 2 exit, 5 enter ==> current = 6
    // Stop 3: 4 exit, 2 enter ==> current = 4
    // Stop 4: 4 exit, 0 enter ==> current = 0
    // Max = 6 ==> answer = 6

    ll t;
    cin >> t;
    ll a, b;
    ll cur = 0, ans = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        cur -= a;
        cur += b;
        ans = max(ans, cur);
    }
    cout << ans << endl;
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