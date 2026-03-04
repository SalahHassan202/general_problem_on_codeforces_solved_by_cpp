// G. Geometric Progression

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    map<ll, ll> mp1, mp2;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp2[v[i]]++;
    }

    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        ll md = v[i];
        mp2[md]--;

        if (md % k == 0)
        {
            ll p = md / k;
            ll nx = md * k;

            if (mp1.count(p) && mp2.count(nx))
            {
                cnt += mp1[p] * mp2[nx];
            }
        }
        mp1[md]++;
    }

    cout << cnt << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}