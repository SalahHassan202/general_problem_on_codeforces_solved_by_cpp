// T. C+=

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    ll cnt = 0;
    while (a <= n && b <= n)
    {
        if (a < b)
            a += b;
        else
            b += a;

        cnt++;
    }
    cout << cnt << endl;
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