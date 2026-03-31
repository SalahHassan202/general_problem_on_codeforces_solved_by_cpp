// M. Sinking Ship

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
    vector<string> a, b, c, d;
    for (ll i = 0; i < n; i++)
    {
        string x, y;
        cin >> x >> y;
        if (y == "rat")
        {
            a.push_back(x);
        }
        else if (y == "woman" || y == "child")
        {
            b.push_back(x);
        }
        else if (y == "man")
        {
            c.push_back(x);
        }
        else
        {
            d.push_back(x);
        }
    }

    for (auto x : a)
    {
        cout << x << endl;
    }

    for (auto x : b)
    {
        cout << x << endl;
    }

    for (auto x : c)
    {
        cout << x << endl;
    }

    for (auto x : d)
    {
        cout << x << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}