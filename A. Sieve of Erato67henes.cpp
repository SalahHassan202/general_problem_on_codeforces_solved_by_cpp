// A. Sieve of Erato67henes

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
    cin >> n;

    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a == 67)
        {
            ok = true;
        }
    }

    if (ok)
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

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
