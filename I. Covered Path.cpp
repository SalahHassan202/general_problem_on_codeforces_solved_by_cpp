// I. Covered Path

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll v1, v2;
    cin >> v1 >> v2;
    ll t, d;
    cin >> t >> d;
    ll s = 0;
    for (ll i = 0; i < t; i++)
    {
        ll f = v1 + i * d;
        ll g = v2 + (t - i - 1) * d;
        s += min(f, g);
    }
    cout << s << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}