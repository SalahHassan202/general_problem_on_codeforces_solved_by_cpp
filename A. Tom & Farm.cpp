// A. Tom & Farm

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
    vector<vector<char>> v(n, vector<char>(m));
    vector<vector<bool>> ok(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    ll dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    ll dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (v[i][j] == 'b')
            {
                ok[i][j] = true;
            }

            if (v[i][j] == 'c')
            {
                ok[i][j] = true;

                for (int d = 0; d < 8; d++)
                {
                    int x = i + dx[d];
                    int y = j + dy[d];

                    if (x >= 0 && x < n && y >= 0 && y < m)
                    {
                        ok[x][y] = true;
                    }
                }
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '.' && !ok[i][j])
            {
                ans++;
            }
        }
    }

    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}