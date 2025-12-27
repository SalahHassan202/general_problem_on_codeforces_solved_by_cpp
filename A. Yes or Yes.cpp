// A. Yes or Yes

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        int cntY = 0;
        for (char c : s)
        {
            if (c == 'Y')
                cntY++;
        }

        if (cntY <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}