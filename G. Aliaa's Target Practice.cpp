// G. Aliaa's Target Practice

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        string s;
        cin >> s; // s ===> row
        for (int j = 0; j < 10; j++)
        {
            if (s[j] == 'X')
            {
                ll d = min(min(i, 9 - i), min(j, 9 - j));
                cnt += d + 1;
            }
        }
    }
    cout << cnt << endl;
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