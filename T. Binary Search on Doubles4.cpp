// T. Binary Search on Doubles4

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll n;
vector<ll> v1;
double salah(double x)
{
    double y = 0, mx = 0, z = 0, mn = 0;
    for (ll i = 0; i < n; i++)
    {
        double v = v1[i] - x;
        y = max(v, y + v);
        mx = max(mx, y);
        z = min(v, z + v);
        mn = min(mn, z);
    }
    return max(mx, -mn);
}

void solve()
{
    cin >> n;
    v1.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    double l = -10000, r = 10000;
    for (ll i = 0; i < 100; i++)
    {
        double m1 = l + (r - l) / 3;
        double m2 = r - (r - l) / 3;

        if (salah(m1) < salah(m2))
        {
            r = m2;
        }
        else
        {
            l = m1;
        }
    }
    cout << fixed << setprecision(9) << salah(l) << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}