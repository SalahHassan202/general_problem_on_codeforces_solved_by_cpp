// C. Subarray Sums II

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v1(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    map<ll, ll> mp;
    mp[0] = 1;
    ll s = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        s += v1[i];
        if (mp.count(s - x))
        {
            ans += mp[s - x];
        }
        mp[s]++;
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}