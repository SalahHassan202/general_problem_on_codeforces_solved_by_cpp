// P. Bark to Unlock

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
    ll n;
    cin >> n;

    bool ok1 = false;
    bool ok2 = false;
    bool ok3 = false;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;

        if (s == x)
            ok1 = true;

        if (s[1] == x[0])
            ok2 = true;

        if (s[0] == x[1])
            ok3 = true;
    }

    if (ok1 || (ok2 && ok3))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    fast;

    solve();

    return 0;
}