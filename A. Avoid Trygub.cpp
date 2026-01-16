// A. Avoid Trygub

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    sort(s.begin(), s.end());
    cout << s << '\n';
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
