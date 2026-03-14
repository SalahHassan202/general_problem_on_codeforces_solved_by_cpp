// C. Stamina and Tasks

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
    vector<ll> c(n), p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i] >> p[i];
    }

    double ok = 0.0;
    for (int i = n - 1; i >= 0; i--)
    {
        double x = ok;
        double y = c[i] + (1.0 - p[i] / 100.0) * ok;
        ok = max(x, y);
    }
    cout << fixed << setprecision(10) << ok << endl;
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