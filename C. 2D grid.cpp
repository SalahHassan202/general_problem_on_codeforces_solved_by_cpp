//  C. 2D grid

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    // For N = 2, M = 2:

    // Grid:

    //     (0,0): 0

    //     (0,1): 1

    //     (1,0): 1

    //     (1,1): 2

    ll n, m;
    cin >> n >> m;
    ll sum = n * m * (n + m - 2) / 2;
    cout << sum;
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
