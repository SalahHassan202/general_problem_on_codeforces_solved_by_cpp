// A. Split it!

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (k == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        if (n < 2 * k + 1)
        {
            cout << "NO" << endl;
            continue;
        }

        bool ok = true;
        for (int i = 0; i < k; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}