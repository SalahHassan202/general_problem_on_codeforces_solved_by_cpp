// B. Normal Problem
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
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'q')
            cout << "p";
        else if (s[i] == 'p')
            cout << "q";
        else
            cout << "w";
    }
    cout << endl;
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