// E. Hungry?

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
    ll mx_freq = 0;
    vector<ll> cnt(2000001, 0); // max value 2 million in problem
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        cnt[x]++;

        if (cnt[x] > mx_freq)
            mx_freq = cnt[x];
    }

    for (ll i = 0; i <= 2000000; i++)
    {
        if (cnt[i] == mx_freq)
        {
            cout << i;
            return;
        }
    }
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}