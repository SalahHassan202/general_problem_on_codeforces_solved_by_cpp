// C. P vs. NP

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a % b == 0)
        cout << 0 << endl;
    else
    {
        cout << b - (a % b) << endl;
    }
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
