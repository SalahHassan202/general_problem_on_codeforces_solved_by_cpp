// C. Hard Problem
#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    //! input: m = 3, a = 6, b = 1, c = 1
    // Row 1: min(m, a) = min(3, 6) = 3 monkeys can sit
    // Row 2: min(m, b) = min(3, 1) = 1 monkey can sit
    // Empty seats = (m - 3) + (m - 1) = 0 + 2 = 2
    // monkeys (c) = min(2, 1) = 1 can sit
    // Total = 3 + 1 + 1 = 5 monkeys seated
    ll m, a, b, c;
    cin >> m >> a >> b >> c;
    ll ans = 0, freq = 0;
    ans += min(m, a);
    ans += min(m, b);
    freq += m - min(m, a);
    freq += m - min(m, b);
    ans += min(freq, c);
    cout << ans << endl;
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