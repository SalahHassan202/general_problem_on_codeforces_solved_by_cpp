// E. Boots

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
    unordered_map<ll, ll> l, r;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        l[x]++;
    }

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        r[x]++;
    }

    ll ok = 0;
    for (auto &p : l)
    {
        ll s = p.first;
        ok += min(p.second, r[s]);
    }

    cout << n - ok << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}