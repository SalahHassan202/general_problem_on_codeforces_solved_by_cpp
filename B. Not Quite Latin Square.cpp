// B. Not Quite Latin Square

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll a[3] = {};
    for (int i = 0; i < 9; i++)
    {
        char cc;
        cin >> cc;
        if (cc != '?')
        {
            a[cc - 'A']++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (a[i] < 3)
        {
            cout << (char)('A' + i) << endl;
        }
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