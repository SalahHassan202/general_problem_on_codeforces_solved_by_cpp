// D. Coach Hazem

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k, p;
    cin >> n >> k;
    if (n == 0)
        p = 1;
    else
        p = (n + k - 1) / k;

    ll s = k * p;
    ll z = s - n;
    cout << z << endl;
}

int main()
{
    fast;
    ll t = 1;
    // cin >> t ;
    while (t--)
    {
        solve();
    }

    return 0;
}