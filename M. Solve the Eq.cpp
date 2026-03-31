// M. Solve the Eq

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll d;
    cin >> d;
    double x = (double)d * d - 4.0 * d;
    if (x < 0)
    {
        cout << "N" << endl;
        return;
    }

    double sq = sqrt(x);
    double a = (d + sq) / 2.0;
    double b = d - a;
    cout << "Y " << fixed << setprecision(9) << a << " " << b << endl;
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