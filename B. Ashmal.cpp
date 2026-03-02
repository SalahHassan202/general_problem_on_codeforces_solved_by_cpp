// B. Ashmal

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
    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    string res = "";
    for (int i = 0; i < n; i++)
    {

        string s1 = res + v[i];
        string s2 = v[i] + res;
        res = min(s1, s2);
    }

    cout << res << endl;
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