// A. The Equalizer

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s += x;
    }
    ll sum = n * k;
    if (s % 2 != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (sum % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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