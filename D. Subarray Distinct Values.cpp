// D. Subarray Distinct Values

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
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    map<ll, ll> mp;
    ll l = 0, ans = 0;
    for (ll r = 0; r < n; r++)
    {
        mp[v1[r]]++;
        while ((ll)mp.size() > k)
        {
            mp[v1[l]]--;
            if (mp[v1[l]] == 0)
            {
                mp.erase(v1[l]);
            }
            l++;
        }
        ans += (r - l + 1);
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}