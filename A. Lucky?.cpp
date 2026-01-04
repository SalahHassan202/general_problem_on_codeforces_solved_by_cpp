// A. Lucky?

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
    if ((s[0] + s[1] + s[2]) == (s[3] + s[4] + s[5]))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
