// N. Petr and a Combination Lock

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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 0; i < (1 << n); i++)
    {
        ll sum = 0;
        for (ll j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += a[j];
            }
            else
            {
                sum -= a[j];
            }
        }
        if (sum % 360 == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}