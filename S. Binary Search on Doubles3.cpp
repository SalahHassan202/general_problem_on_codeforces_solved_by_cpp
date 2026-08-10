// S. Binary Search on Doubles3

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll n, k;
vector<double> v1;
bool salah(double x)
{
    double ok1 = 0, ok2 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v1[i] > x)
        {
            ok1 += (v1[i] - x) * (100.0 - k) / 100.0;
        }
        else
        {
            ok2 += (x - v1[i]);
        }
    }
    return ok1 >= ok2;
}

void solve()
{
    cin >> n >> k;
    v1.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    double l = 0, r = 1000;
    for (ll i = 0; i < 100; i++)
    {
        double m = (l + r) / 2;
        if (salah(m))
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    cout << fixed << setprecision(9) << l << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}