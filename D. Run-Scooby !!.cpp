// D. Run-Scooby !!

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll n;
vector<string> v;
bool s[55][55];
bool f[55];
ll dx[] = {1, -1, 0, 0};
ll dy[] = {0, 0, 1, -1};

bool ok(ll x, ll y)
{
    if (x < 0 || y < 0 || x >= n || y >= n)
    {
        return false;
    }
    if (s[x][y] || f[x])
    {
        return false;
    }
    return true;
}

void dfs(ll x, ll y)
{
    s[x][y] = 1;
    for (ll i = 0; i < 4; i++)
    {
        ll nx = x + dx[i];
        ll ny = y + dy[i];

        if (ok(nx, ny))
        {
            dfs(nx, ny);
        }
    }
}

void solve()
{
    cin >> n;
    v.assign(n, "");
    memset(f, 0, sizeof f);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sx, sy, hx, hy, ex, ey;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (v[i][j] == 'G')
            {
                f[i] = 1;
            }
            if (v[i][j] == 'S')
            {
                sx = i, sy = j;
            }
            if (v[i][j] == 'H')
            {
                hx = i, hy = j;
            }
            if (v[i][j] == 'E')
            {
                ex = i, ey = j;
            }
        }
    }

    memset(s, 0, sizeof s);
    if (!f[sx])
        dfs(sx, sy);
    bool ok1 = s[ex][ey];
    memset(s, 0, sizeof s);
    if (!f[hx])
        dfs(hx, hy);
    bool ok2 = s[ex][ey];
    if (ok1 && ok2)
    {
        cout << "Scooby-Dooby-Doo!" << endl;
    }
    else
    {
        cout << "Ruh-roh--RAGGY!!!" << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}