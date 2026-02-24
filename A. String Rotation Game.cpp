// A. String Rotation Game

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll cnt(string m, ll n)
{
    if (n == 0)
    {
        return 0;
    }

    ll b = 1;

    for (int i = 1; i < n; i++)
    {
        if (m[i] != m[i - 1])
        {
            b++;
        }
    }

    return b;
}

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll mx = 0;

    for (int i = 0; i < n; i++)
    {
        string k = s.substr(i) + s.substr(0, i);
        mx = max(mx, cnt(k, n));
    }

    cout << mx << endl;
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