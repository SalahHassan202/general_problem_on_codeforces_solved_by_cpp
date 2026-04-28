// F. Bulbs

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

    ll mx = 0, c = 0;
    for (ll i = 0; i < n; i++)
    {
        mx = max(mx, v[i]);
        if (mx == i + 1)
        {
            c++;
        }
    }
    cout << c << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}