// B. Cyclists

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k, p, m;
    cin >> n >> k >> p >> m;
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    ll a = v1[p - 1];
    vector<ll> v3;
    for (ll i = 0; i < p - 1; i++)
    {
        v3.push_back(v1[i]);
    }
    sort(v3.begin(), v3.end());

    vector<ll> v2;
    for (ll i = 0; i < n; i++)
    {
        if (i != p - 1)
        {
            v2.push_back(v1[i]);
        }
    }
    sort(v2.begin(), v2.end());
    ll f = 0;
    if (p > k)
    {
        f = p - k;
    }
    ll b = n - k;

    vector<ll> pref1(p + 1, 0);
    for (ll i = 0; i < (ll)v3.size(); i++)
    {
        pref1[i + 1] = pref1[i] + v3[i];
    }

    vector<ll> pref2(n + 1, 0);
    for (ll i = 0; i < (ll)v2.size(); i++)
    {
        pref2[i + 1] = pref2[i] + v2[i];
    }
    ll c = a;
    if (f > 0)
    {
        c += pref1[f];
    }
    if (c > m)
    {
        cout << 0 << endl;
        return;
    }
    ll r = m - c;
    ll ans = 1;
    if (b <= 0)
    {
        ans += r / a;
    }
    else
    {
        ll x = a + pref2[b];
        ans += r / x;
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