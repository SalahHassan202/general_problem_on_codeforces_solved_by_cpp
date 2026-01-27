// H. Hamed's Subarrays

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
    ll ans = 0, s = 0;
    unordered_map<ll, ll> mp;
    mp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s += x;

        ans += mp[s];
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