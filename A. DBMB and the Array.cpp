// A. DBMB and the Array

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, s, x;
    cin >> n >> s >> x;
    vector<ll> v1(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
        sum += v1[i];
    }

    if (s >= sum)
    {
        if ((s - sum) % x == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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