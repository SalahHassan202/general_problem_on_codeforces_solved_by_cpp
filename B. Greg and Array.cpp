// B. Greg and Array

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v1(n + 2);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v1[i];
    }

    vector<ll> l(m + 2), r(m + 2), d(m + 2);
    for (ll i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }

    vector<ll> v2(m + 3, 0);
    for (ll i = 0; i < k; i++)
    {
        ll a, b;
        cin >> a >> b;

        v2[a]++;
        v2[b + 1]--;
    }

    for (ll i = 1; i <= m; i++)
    {
        v2[i] += v2[i - 1];
    }

    vector<ll> v3(n + 3, 0);
    for (ll i = 1; i <= m; i++)
    {
        ll x = v2[i] * d[i];

        v3[l[i]] += x;
        v3[r[i] + 1] -= x;
    }

    for (ll i = 1; i <= n; i++)
    {
        v3[i] += v3[i - 1];
    }

    for (ll i = 1; i <= n; i++)
    {
        cout << v1[i] + v3[i] << " ";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}