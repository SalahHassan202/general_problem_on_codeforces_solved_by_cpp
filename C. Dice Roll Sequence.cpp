// C. Dice Roll Sequence

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

bool salah(int a, int b)
{
    if (a == b)
    {
        return false;
    }
    if (a + b == 7)
    {
        return false;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<vector<ll>> dp(n, vector<ll>(7, n + 1));
    for (int j = 1; j <= 6; j++)
    {
        if (v[0] == j)
        {
            dp[0][j] = 0;
        }
        else
        {
            dp[0][j] = 1;
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int z = 1; z <= 6; z++)
        {
            ll x;
            if (v[i] == z)
            {
                x = 0;
            }
            else
            {
                x = 1;
            }

            for (int y = 1; y <= 6; y++)
            {
                if (salah(z, y))
                {
                    ll d = dp[i - 1][y] + x;

                    if (d < dp[i][z])
                    {
                        dp[i][z] = d;
                    }
                }
            }
        }
    }

    ll oper = n + 1;
    for (int j = 1; j <= 6; j++)
    {
        if (dp[n - 1][j] < oper)
        {
            oper = dp[n - 1][j];
        }
    }

    cout << oper << endl;
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