// P02. Candies

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
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<ll> pref(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }

    ll l, r;
    cin >> l >> r;
    l++, r++;
    ll ans = pref[r] - pref[l - 1];
    cout << ans << "\n";
}

int main()
{
    fast;

    solve();

    return 0;
}