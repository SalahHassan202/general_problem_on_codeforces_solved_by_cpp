// D. Unfair Game

#include <bits/stdc++.h>
#define ll long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);
using namespace std;

ll C(int n, int k)
{
    if (k < 0 || k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
    if (k > n / 2)
        k = n - k;
    ll r = 1;
    for (int i = 1; i <= k; ++i)
    {
        r = r * (n - i + 1) / i;
    }
    return r;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll d = 0, tmp = n;
    while (tmp > 1)
    {
        tmp >>= 1;
        d++;
    }

    ll ans = 0;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i + j - 1 > k)
            {
                ans += C(i - 1, j - 1);
            }
        }
    }

    if (d + 1 > k)
        ans++;

    cout << ans << "\n";
}

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}