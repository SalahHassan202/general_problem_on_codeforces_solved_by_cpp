// F. Sayed and Tic-Tac-Toe

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    char g[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> g[i][j];
        }
    }

    bool x = false, o = false, p = false;

    for (int i = 0; i < 3; i++)
    {
        if (g[i][0] == 'X' && g[i][1] == 'X' && g[i][2] == 'X')
            x = true;
        if (g[i][0] == 'O' && g[i][1] == 'O' && g[i][2] == 'O')
            o = true;
        if (g[i][0] == '+' && g[i][1] == '+' && g[i][2] == '+')
            p = true;

        if (g[0][i] == 'X' && g[1][i] == 'X' && g[2][i] == 'X')
            x = true;
        if (g[0][i] == 'O' && g[1][i] == 'O' && g[2][i] == 'O')
            o = true;
        if (g[0][i] == '+' && g[1][i] == '+' && g[2][i] == '+')
            p = true;
    }

    if (g[0][0] == 'X' && g[1][1] == 'X' && g[2][2] == 'X')
        x = true;
    if (g[0][0] == 'O' && g[1][1] == 'O' && g[2][2] == 'O')
        o = true;
    if (g[0][0] == '+' && g[1][1] == '+' && g[2][2] == '+')
        p = true;

    if (g[0][2] == 'X' && g[1][1] == 'X' && g[2][0] == 'X')
        x = true;
    if (g[0][2] == 'O' && g[1][1] == 'O' && g[2][0] == 'O')
        o = true;
    if (g[0][2] == '+' && g[1][1] == '+' && g[2][0] == '+')
        p = true;

    if (x)
        cout << "X\n";
    else if (o)
        cout << "O\n";
    else if (p)
        cout << "+\n";
    else
        cout << "DRAW\n";
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
