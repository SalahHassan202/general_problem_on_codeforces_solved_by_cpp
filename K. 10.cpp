// K. Pipes

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
    string s[2];
    cin >> s[0] >> s[1];
    ll r = 0, c = 0;
    for (c = 0; c < n; c++)
    {
        if (s[r][c] >= '3')
        {
            r = 1 - r;
            if (s[r][c] < '3')
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    if (r == 1)
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

    ll q;
    cin >> q;
    while (q--)
    {
        solve();
    }

    return 0;
}