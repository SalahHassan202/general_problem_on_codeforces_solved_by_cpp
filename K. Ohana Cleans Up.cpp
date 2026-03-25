// K. Ohana Cleans Up

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
    map<string, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    ll ans = 0;
    for (auto [k, v] : mp)
    {
        if (v > ans)
        {
            ans = v;
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}