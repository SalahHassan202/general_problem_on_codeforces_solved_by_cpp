// H. Triago

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
    ll total = a * (a + 1) / 2;
    ll sum = 0, cur = 1;
    while (cur <= a)
    {
        sum += cur;
        if (cur > a / b)
        {
            break;
        }
        cur *= b;
    }
    ll ans = total - 2 * sum;
    cout << ans << endl;
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