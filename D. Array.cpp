// D. Array

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
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    while (q--)
    {
        ll x;
        cin >> x;
        ll pos = upper_bound(v.begin(), v.end(), x) - v.begin();
        cout << (n - pos) << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}