// A. Yan and Maths

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
    ll ev = 0, od = 0;
    while (n > 0)
    {
        ll p = n % 10;
        if (p % 2 == 0)
            ev++;
        else
            od++;
        n = n / 10;
    }
    cout << "Even : " << ev << endl;
    cout << "Odd : " << od << endl;
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