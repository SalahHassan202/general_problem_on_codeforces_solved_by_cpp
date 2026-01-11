// F. a Point

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    float x, y;
    cin >> x >> y;
    if (x == 0.0 && y == 0.0)
    {
        cout << "Origem" << endl;
    }
    else if (x != 0 && y == 0.0)
    {
        cout << "Eixo X" << endl;
    }
    else if (x == 0.0 && y != 0.0)
    {
        cout << "Eixo Y" << endl;
    }
    else if (x > 0.0 && y > 0.0)
    {
        cout << "Q1" << endl;
    }
    else if (x < 0.0 && y > 0.0)
    {
        cout << "Q2" << endl;
    }
    else if (x < 0.0 && y < 0.0)
    {
        cout << "Q3" << endl;
    }
    else
    {
        cout << "Q4" << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}