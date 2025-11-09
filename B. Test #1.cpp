// B. Test #1

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> v(n + 1, vector<ll>(n + 1));
    vector<vector<ll>> p(n + 1, vector<ll>(n + 1, 0));

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            cin >> v[i][j];
            // pref sum
            p[i][j] = v[i][j] + p[i][j - 1] + p[i - 1][j] - p[i - 1][j - 1];
        }
    }
    ll mx_sum = 0;

    for (ll r = 1; r <= n - k + 1; r++) // row
    {
        for (ll c = 1; c <= n - k + 1; c++) // column
        {

            ll r2 = r + k - 1;
            ll c2 = c + k - 1;

            ll current_sum = p[r2][c2] - p[r - 1][c2] - p[r2][c - 1] + p[r - 1][c - 1];

            mx_sum = max(mx_sum, current_sum);
        }
    }

    cout << mx_sum << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}