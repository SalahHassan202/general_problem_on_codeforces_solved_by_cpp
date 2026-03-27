// L. Letters

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
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll cur = 0, idx = 0;
    for (ll i = 0; i < m; i++)
    {
        ll b;
        cin >> b;
        while (b > cur + v[idx])
        {
            cur += v[idx];
            idx++;
        }

        cout << idx + 1 << " " << b - cur << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}