// P60. Queries about less or equal elements

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 0; j < m; j++)
        cin >> b[j];

    sort(a.begin(), a.end());
    for (int j = 0; j < m; j++)
    {
        ll count = upper_bound(a.begin(), a.end(), b[j]) - a.begin();
        cout << count << " ";
    }
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