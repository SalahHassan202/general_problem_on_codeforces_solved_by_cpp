// A. Dreamoon and WiFi

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll e, q, g;
void dfs(ll i, ll r)
{
    if (i == q)
    {
        if (r == e)
        {
            g++;
        }
        return;
    }
    dfs(i + 1, r + 1);
    dfs(i + 1, r - 1);
}

void solve()
{
    string a, b;
    cin >> a >> b;
    e = 0;
    for (auto c : a)
    {
        if (c == '+')
        {
            e++;
        }
        else
        {
            e--;
        }
    }

    ll r = 0;
    q = 0;
    for (auto c : b)
    {
        if (c == '+')
        {
            r++;
        }
        else if (c == '-')
        {
            r--;
        }
        else
        {
            q++;
        }
    }

    g = 0;

    dfs(0, r);
    double tot = (1 << q);
    cout << fixed << setprecision(12) << (double)g / tot << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}