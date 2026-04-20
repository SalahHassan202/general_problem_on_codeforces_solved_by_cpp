// B. Main Diagonal

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
    vector<vector<ll>> v1(n, vector<ll>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> v1[i][j];
        }
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << 0;
            }
            else
            {
                cout << v1[i][j];
            }

            if (j != n - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}