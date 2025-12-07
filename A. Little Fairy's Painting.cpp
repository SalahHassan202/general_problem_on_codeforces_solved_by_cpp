// A. Little Fairy's Painting

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
    vector<ll> v(n + 1);
    set<ll> s;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    ll d = s.size();
    auto it = s.lower_bound(d);
    cout << *it << "\n";
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