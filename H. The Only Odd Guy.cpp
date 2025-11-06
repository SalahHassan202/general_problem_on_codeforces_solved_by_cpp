// H. The Only Odd Guy

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

    // XOR (Exclusive OR)
    ll n, x, res = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        res ^= x;
    }

    cout << res << endl;
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