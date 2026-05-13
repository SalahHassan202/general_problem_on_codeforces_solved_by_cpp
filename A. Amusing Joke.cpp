// A. Amusing Joke

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string a, b, c;
    cin >> a >> b >> c;
    string s = a + b;
    sort(s.begin(), s.end());
    sort(c.begin(), c.end());
    if (s == c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}