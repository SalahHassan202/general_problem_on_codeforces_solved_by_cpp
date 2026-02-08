// D. Make AP

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        if ((2 * b - c) > 0 && (2 * b - c) % a == 0)
        {
            ok = true;
        }

        if ((a + c) % (2 * b) == 0)
        {
            ok = true;
        }

        if ((2 * b - a) > 0 && (2 * b - a) % c == 0)
        {
            ok = true;
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}