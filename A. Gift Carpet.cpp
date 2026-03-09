// A. Gift Carpet

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
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    string ok = "vika";
    ll idx = 0;

    for (int i = 0; i < m && idx < 4; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j][i] == ok[idx])
            {
                idx++;
                break;
            }
        }
    }

    if (idx == 4)
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

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}