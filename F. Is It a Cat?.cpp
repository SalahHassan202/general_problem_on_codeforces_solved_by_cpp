// F. Is It a Cat?

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }

    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0 || s[i] != s[i - 1])
            temp += s[i];
    }

    if (temp == "meow")
        cout << "YES\n";
    else
        cout << "NO\n";
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