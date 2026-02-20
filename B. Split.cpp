// B. Split

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
    vector<ll> a(2 * n);

    map<ll, ll> freq;

    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];

        freq[a[i]]++;
    }

    ll x = 0, y = 0, z = 0;

    for (auto &p : freq)
    {
        int c = p.second;

        if (c % 2 == 1)
            x++;
        else if (c % 4 == 2)
            y++;
        else
            z++;
    }

    ll ans = x + 2 * y + 2 * z;

    if (z % 2 == 1 && x == 0)
        ans -= 2;

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