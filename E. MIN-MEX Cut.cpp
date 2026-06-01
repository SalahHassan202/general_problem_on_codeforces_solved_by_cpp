// E. MIN-MEX Cut

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
    ll ok = 0;
    for (auto c : s)
    {
        if (c == '1')
        {
            ok = 1;
        }
    }
    if (!ok)
    {
        cout << 1 << endl;
        return;
    }

    ll cnt = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            cnt++;

            while (i < s.size() && s[i] == '0')
            {
                i++;
            }

            i--;
        }
    }
    cout << min(2LL, cnt) << endl;
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