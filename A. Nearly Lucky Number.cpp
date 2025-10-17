// A. Nearly Lucky Number

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
    for (char c : s)
    {
        if (c == '4' || c == '7')
            cnt++;
    }

    string n = to_string(cnt);
    bool lucky = true;
    if (cnt == 0)
        lucky = false;

    for (char c : n)
    {
        if (c != '4' && c != '7')
            lucky = false;
    }

    cout << (lucky ? "YES" : "NO");
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