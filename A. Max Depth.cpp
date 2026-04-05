// A. Max Depth

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

vector<ll> v1, v2;
ll salah(ll a)
{
    if (v1[a] == -1)
    {
        return 1;
    }
    if (v2[a] != -1)
    {
        return v2[a];
    }
    return v2[a] = 1 + salah(v1[a]);
}

void solve()
{
    ll n;
    cin >> n;
    v1.assign(n + 1, 0);
    v2.assign(n + 1, -1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v1[i];
    }

    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ans = max(ans, salah(i));
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}