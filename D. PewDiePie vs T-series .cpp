// D. PewDiePie vs T-series

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
    ll cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'T' && s[i + 1] == 'T' && s[i + 2] == 'T')
        {
            cnt++;
        }
    }
    cout << cnt << endl;
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
