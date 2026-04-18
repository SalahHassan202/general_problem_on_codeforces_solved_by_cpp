// E. The 67th XOR Problem

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const int N = -1;
vector<vector<ll>> v1;
ll temp;

void salah(ll x)
{
    ll node = 0;
    for (ll i = 29; i >= 0; i--)
    {
        ll b = (x / (1 << i)) % 2;
        if (v1[node][b] == N)
        {
            v1.push_back({N, N});
            v1[node][b] = ++temp;
        }
        node = v1[node][b];
    }
}

ll hassan(ll x)
{
    ll node = 0;
    ll res = 0;
    for (ll i = 29; i >= 0; i--)
    {
        ll b = (x / (1 << i)) % 2;
        ll w = 1 - b;
        if (v1[node][w] != N)
        {
            res = res + (1 << i);
            node = v1[node][w];
        }
        else
        {
            node = v1[node][b];
        }
    }
    return res;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v2(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    v1.clear();
    v1.push_back({N, N});
    temp = 0;
    ll ans = 0;
    salah(v2[0]);
    for (ll i = 1; i < n; i++)
    {
        ans = max(ans, hassan(v2[i]));
        salah(v2[i]);
    }
    cout << ans << endl;
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