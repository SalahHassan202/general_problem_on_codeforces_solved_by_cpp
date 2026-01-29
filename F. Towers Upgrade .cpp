// F. Towers Upgrade

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const ll MOD = 1000000007; // 10e9 + 7

ll power(ll b, ll e) // base , exponintial
{
    ll r = 1;
    for (ll i = 0; i < e; i++)
    {
        r = (r * b) % MOD;
    }
    return r;
}

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll x = abs(a - b);

    ll t1 = power(a, b);
    ll t2 = power(b, a);
    ll t3 = power(c, x);

    vector<ll> v = {t1, t2, t3};
    // v.push_back(t1);
    // v.push_back(t2);
    // v.push_back(t3);

    sort(v.begin(), v.end());

    for (ll val : v)
        cout << val << " ";

    cout << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}