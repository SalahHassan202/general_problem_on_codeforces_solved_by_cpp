// H. NO statement

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
    cin >> n; // number of level
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<ll, ll> mp;
    for (ll x : v)
    {
        mp[x]++;
    }

    for (ll x : v)
    {
        if (mp[x] == 1)
        {
            cout << x;
            return;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
