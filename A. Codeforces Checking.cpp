// A. Codeforces Checking

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
    char c;
    cin >> c;
    for (auto i : s)
    {
        if (c == i)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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