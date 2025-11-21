// A. ASCII Art Contest

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll g, c, l;
    cin >> g >> c >> l;
    vector<ll> v = {g, c, l};
    sort(v.begin(), v.end());

    ll mn = v[0];
    ll mx = v[2];
    ll diff = v[2] - v[0];

    if (diff >= 10)
        cout << "check again" << endl;
    else
        cout << "final " << v[1] << endl;
}

int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}