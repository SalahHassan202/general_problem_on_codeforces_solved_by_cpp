// U. Binary Search on Doubles5

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll n;
vector<pair<ll, ll>> v1;
bool ok(double r)
{
    double l = -1e18, h = 1e18;
    for (ll i = 0; i < n; i++)
    {
        double x = v1[i].first;
        double y = v1[i].second;
        double d = 2.0 * r * y - y * y;

        if (d < 0)
        {
            return false;
        }

        double dx = sqrt(d);
        double L = x - dx;
        double R = x + dx;

        l = max(l, L);
        h = min(h, R);
    }
    return l <= h;
}

void solve()
{
    cin >> n;
    v1.resize(n);
    bool uu = false, dd = false;
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i].first >> v1[i].second;

        if (v1[i].second > 0)
        {
            uu = true;
        }

        if (v1[i].second < 0)
        {
            dd = true;
        }
    }

    if (uu && dd)
    {
        cout << -1 << endl;
        return;
    }
    if (dd)
    {
        for (ll i = 0; i < n; i++)
        {
            v1[i].second = -v1[i].second;
        }
    }

    double l = 0, r = 1e14;
    for (ll i = 0; i < 100; i++)
    {
        double m = (l + r) / 2;
        if (ok(m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << fixed << setprecision(9) << r << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}