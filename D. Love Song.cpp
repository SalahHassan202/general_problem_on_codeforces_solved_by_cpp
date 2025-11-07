// D. Love Song

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
    string s;
    cin >> s;
    vector<ll> pref_sum(n + 1, 0);

    for (ll i = 0; i < n; i++)
    {
        ll c = s[i] - 'a' + 1; // ASCII Code     ===> a = 97 , b = 98 , c = 99 , d = 100 , e = 101 , f = 102 ,.........
        // a = 1 , b = 2 , c = 3 , d = 4 , e = 5 .................
        pref_sum[i + 1] = pref_sum[i] + c;
    }

    for (ll i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        ll res = pref_sum[r] - pref_sum[l - 1];
        cout << res << endl;
    }
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t ;
    while (t--)
    {
        solve();
    }

    return 0;
}