// B. Following Directions

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;
const string s = "codeforces";
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll x = 0, y = 0; // (x , y)
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            x--;
        if (s[i] == 'R')
            x++;
        if (s[i] == 'D')
            y--;
        if (s[i] == 'U')
            y++;
        if (x == 1 && y == 1)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}