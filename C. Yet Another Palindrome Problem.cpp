// C. Yet Another Palindrome Problem

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

    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        if (mp.count(v[i]) && i - mp[v[i]] >= 2)
        {
            cout << "YES" << endl;
            return;
        }
        if (!mp.count(v[i]))
        {
            mp[v[i]] = i;
        }
    }
    cout << "NO" << endl;
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