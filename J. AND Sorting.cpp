// J. AND Sorting

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
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll a = 1;
    for (ll i = 0; i < 30; i++)
    {
        a *= 2;
    }
    a--;

    for (ll i = 0; i < n; i++)
    {
        if (v[i] != i)
        {
            a &= v[i];
            a &= i;
        }
    }
    cout << a << endl;
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