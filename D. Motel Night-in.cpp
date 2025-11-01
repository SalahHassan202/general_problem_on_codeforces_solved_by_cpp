// D. Motel Night-in
#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll d, s;
    cin >> d >> s;
    if (3 * s >= 2 * d)
        cout << "Sunny Day";
    else if (3 * s <= d)
        cout << "Rainy Day";
    else
        cout << "Cloudy Day";
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