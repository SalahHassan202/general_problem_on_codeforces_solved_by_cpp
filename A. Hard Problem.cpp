// A. Hard Problem
#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

    ll n, m;
    cin >> n >> m;
    if ((n * 2 == m) || (m * 2 == n))
        cout << "YES";
    else
        cout << "NO";
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