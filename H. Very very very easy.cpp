// H. Very very very easy

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll p = a * b;
    for (int x = a + 1; x <= c; x++)
    {
        ll g = std::gcd(x, p); // Calculate the Greatest Common Divisor (GCD)

        ll r = p / g; // Calculate the Required Factor. y must be a multiple of R

        ll k = (b / r) + 1; // Find the multiplier to get the smallest y > b

        ll y = k * r; // Smallest y that satisfies both divisibility and y > b

        if (y <= d)
        {
            cout << x << " " << y << endl;
            return;
        }
    }
    cout << "-1 -1" << endl;
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