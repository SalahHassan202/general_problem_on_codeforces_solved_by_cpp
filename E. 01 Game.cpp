// E. 01 Game

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
    ll cnt0 = 0, cnt1 = 0;
    for (char c : s)
    {
        if (c == '0')
            cnt0++;
        else
            cnt1++;
    }
    ll mv = min(cnt0, cnt1);

    if (mv % 2 != 0)
        cout << "DA" << endl;
    else
        cout << "NET" << endl;
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