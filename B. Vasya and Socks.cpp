// B. Vasya and Socks

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    while (n > 0)
    {
        ans++;
        n--;
        if (ans % m == 0)
            ans++;
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