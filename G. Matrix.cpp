// G. Matrix

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum1 += a[i][j];
            }

            if (i + j == n - 1)
            {
                sum2 += a[i][j];
            }
        }
    }

    cout << abs(sum1 - sum2);
}

int main()
{
    fast;

    solve();

    return 0;
}