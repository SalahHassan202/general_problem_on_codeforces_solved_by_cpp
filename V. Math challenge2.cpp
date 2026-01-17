// V. Math challenge2

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
    ll sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }

    if (sum % 3 == 0)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    fast;

    solve();

    return 0;
}
