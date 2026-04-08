// D. The 67th OEIS Problem

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
    vector<ll> v1;
    ll m = 2;
    while (v1.size() < n + 1)
    {
        bool ok = true;
        for (ll p : v1)
        {
            if (m % p == 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            v1.push_back(m);
        }
        m++;
    }

    for (ll i = 0; i < n; i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << v1[i] * v1[i + 1];
    }
    cout << endl;
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