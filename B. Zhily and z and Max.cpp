// B. Zhily and z and Max

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
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    sort(v1.begin(), v1.end());
    vector<ll> v2, v3;
    v2.push_back(v1.back());
    for (ll i = 0; i < n - 1; i++)
    {
        if (!v2.empty() && v2.back() != v1[i])
        {
            v2.push_back(v1[i]);
        }
        else
        {
            v3.push_back(v1[i]);
        }
    }
    vector<ll> v4;
    for (auto x : v2)
    {
        v4.push_back(x);
    }
    for (auto x : v3)
    {
        v4.push_back(x);
    }
    map<ll, ll> mp;
    ll z = 0, y = 0, w = 0;
    for (ll i = 0; i < n; i++)
    {
        mp[v4[i]]++;
        y = max(y, v4[i]);
        while (mp[z])
        {
            z++;
        }
        w += z + y;
    }
    cout << w << endl;
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