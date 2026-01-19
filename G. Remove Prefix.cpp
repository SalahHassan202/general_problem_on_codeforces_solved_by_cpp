// G. Remove Prefix

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
    ll a[n];
    unordered_set<ll> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.count(a[i]))
        {
            ans = i + 1;
            break;
        }
        s.insert(a[i]);
    }

    cout << ans << endl;
}

int main()
{
    fast;

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
