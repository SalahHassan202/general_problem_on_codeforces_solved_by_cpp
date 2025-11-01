// K. Lucky Birthday
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
    ll sum = n + m;
    if ((sum % 400 == 0) || (sum % 4 == 0 && sum % 100 != 0))
        cout << "Yes";
    else
        cout << "No";
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