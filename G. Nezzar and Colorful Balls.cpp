// G. Nezzar and Colorful Balls

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
    vector<ll> freq(101, 0);

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        freq[x]++;
    }

    ll ans = 0;
    for (int i = 1; i <= 100; i++)
    {
        ans = max(ans, freq[i]);
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