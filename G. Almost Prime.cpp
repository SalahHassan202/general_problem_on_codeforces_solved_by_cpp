// G. Almost Prime

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
    vector<ll> v(n + 1, 0);
    for (ll i = 2; i <= n; i++)
    {
        if (v[i] == 0)
        {
            for (ll j = i; j <= n; j += i)
            {
                v[j]++;
            }
        }
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (v[i] == 2)
        {
            ans++;
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