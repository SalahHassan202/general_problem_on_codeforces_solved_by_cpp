// E. Calendar

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
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }

    if (m.size() < 7)
    {
        cout << 0 << endl;
        return;
    }

    ll w = m[1];
    for (int i = 2; i <= 7; i++)
    {
        w = min(w, m[i]);
    }
    cout << w << endl;
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