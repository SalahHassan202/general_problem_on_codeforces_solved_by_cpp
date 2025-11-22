// S. X Axis

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    vector<ll> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    ll x = v[1];
    //  abs(x-v[1]) ===> v[1] - v[1] = 0
    ll ans = abs(x - v[0]) + abs(x - v[1]) + abs(x - v[2]);
    cout << ans << endl;
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}