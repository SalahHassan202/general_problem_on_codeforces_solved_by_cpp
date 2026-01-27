// D. Give them the maximum

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n + 1);
    vector<ll> pref(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pref[i] = pref[i - 1] + v[i];
    }
    ll l, r;
    while (q--)
    {
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << "\n";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}