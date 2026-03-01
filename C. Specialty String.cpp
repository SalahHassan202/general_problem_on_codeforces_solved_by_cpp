// C. Specialty String

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
    string s;
    cin >> s;

    if (n % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    vector<bool> dp(n + 1, false);
    dp[0] = true;

    vector<ll> ok(n + 1, -1);

    for (int i = 0; i < n; i++)
    {
        int c = i - 1;
        while (c >= 0)
        {
            if (s[c] == s[i])
            {
                ok[i + 1] = c;
                break;
            }

            if (ok[c + 1] != -1)
            {
                c = ok[c + 1] - 1;
            }
            else
            {
                break;
            }
        }

        if (ok[i + 1] != -1)
        {
            int m = ok[i + 1];
            if (dp[m])
            {
                dp[i + 1] = true;
            }
            else
            {
                int y = m;
                while (y > 0 && ok[y] != -1)
                {
                    y = ok[y];
                    if (dp[y])
                    {
                        dp[i + 1] = true;
                        break;
                    }
                }
            }
        }
    }

    if (dp[n])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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