// H. Bombs
#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

    ll r, c;
    cin >> r >> c;
    vector<string> g(r);
    for (int i = 0; i < r; i++)
    {
        cin >> g[i]; // . . . .
    }

    vector<string> ans(r, string(c, '.'));
    // (i-1, j-1)  (i-1, j)  (i-1, j+1)
    //  (i, j-1)    (i, j)    (i, j+1)
    //  (i+1, j-1)  (i+1, j)  (i+1, j+1)

    int dr[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    int dc[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (g[i][j] == 'o')
            {
                for (int k = 0; k < 9; k++)
                {
                    int x = i + dr[k];
                    int y = j + dc[k];
                    if (x >= 0 && x < r && y >= 0 && y < c)
                        ans[x][y] = 'x';
                }
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        cout << ans[i] << endl;
    }
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}