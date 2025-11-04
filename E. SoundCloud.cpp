// E. SoundCloud

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
    string s;
    cin >> n >> s;

    ll pos = 1;
    ll last = 1;

    for (char c : s)
    {
        if (c == '*')
        {
            last = pos;
            pos = pos % 20 + 1;
        }
        else if (c == '>')
        {
            pos = pos % 20 + 1;
            last = pos;
            pos = pos % 20 + 1;
        }
        else if (c == '<')
        {

            pos = (pos + 18) % 20 + 1;
            last = pos;
            pos = pos % 20 + 1;
        }
    }

    cout << last << '\n';
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