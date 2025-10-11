// A. String
#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll cntOne = 0, cntZero = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            cntOne++;
        }
        else
        {
            cntZero++;
        }
    }

    if (cntZero == s.size())
    {
        cout << 0 << endl;
    }
    else
    {
        cout << cntOne << endl;
    }
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