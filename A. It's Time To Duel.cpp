// A. It's Time To Duel

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
        ll n;
        cin >> n;
        ll a[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        bool ok = false;

        if (sum == n)
            ok = true;
        for (int i = 0; i + 1 < n; i++)
        {
            if (a[i] == 0 && a[i + 1] == 0)
            {
                ok = true;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}