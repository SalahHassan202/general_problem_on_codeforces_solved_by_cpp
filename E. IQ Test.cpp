// E. IQ Test

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
    if (b - a == c - b && c - b == d - c)
    {
        cout << d + (b - a) << endl;
    }
    else if (b * b == a * c && c * c == b * d && a != 0 && b != 0 && c != 0)
    {
        if (b != a && (d * b) % a == 0)
        {
            cout << (d * b) / a << endl;
        }
        else
        {
            cout << 42 << endl;
        }
    }
    else
    {
        cout << 42 << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}