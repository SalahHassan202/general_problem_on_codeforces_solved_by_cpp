// E. Find In Matrix

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll k;
    cin >> k;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == k)
            {
                found = true;
                break;
            }
        }
    }

    if (found)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}