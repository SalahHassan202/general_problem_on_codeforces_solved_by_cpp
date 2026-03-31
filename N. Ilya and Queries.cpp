// N. Ilya and Queries

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    vector<ll> v1(n, 0);
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            v1[i] = 1;
        }
    }

    vector<ll> v2(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        v2[i] = v2[i - 1] + v1[i - 1];
    }

    ll m;
    cin >> m;
    while (m--)
    {
        ll l, r;
        cin >> l >> r;
        ll ans = v2[r - 1] - v2[l - 1];
        cout << ans << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}