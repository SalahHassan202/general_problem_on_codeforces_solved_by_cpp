// C. Row GCD

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v1(n), v2(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (ll i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    ll g = 0;
    for (ll i = 1; i < n; i++)
    {
        g = gcd(g, abs(v1[i] - v1[0]));
    }

    for (ll i = 0; i < m; i++)
    {
        ll x = gcd(v1[0] + v2[i], g);
        cout << x << " ";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}