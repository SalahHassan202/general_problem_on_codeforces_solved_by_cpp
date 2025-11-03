// C. Counting Gifts

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
    ll t = 0, e = 0, b = 0, c = 0;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 't')
            t++;
        else if (s[i] == 'e')
            e++;
        else if (s[i] == 'b')
            b++;
        else if (s[i] == 'c')
            c++;
    }
    cout << t << " " << e << " " << b << " " << c;
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