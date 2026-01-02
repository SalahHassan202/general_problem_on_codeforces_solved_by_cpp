// G. Easy Problem

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
    ll n = s.size();
    ll diff = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            diff++;
        }
    }
    if (diff == 1 || (diff == 0 && n % 2 == 1))
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