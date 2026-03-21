// F. Balanced Team

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
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll mx = 0, l = 0;
    for (ll r = 0; r < n; r++)
    {
        while (v[r] - v[l] > 5)
        {
            l++;
        }
        mx = max(mx, r - l + 1);
    }
    cout << mx << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}