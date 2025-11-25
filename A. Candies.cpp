// A. Candies

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    // 2^30 ≈ 1,000,000,000     == > k between (2 ==> 30)
    ll n;
    cin >> n;
    for (int k = 2; k <= 30; k++)
    {
        ll s = pow(2, k) - 1;
        if (n % s == 0)
        {
            cout << n / s << endl;
            return;
        }
    }
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