// C. The 67th Permutation Problem

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        if (i > 1)
        {
            cout << " ";
        }
        cout << i << " " << (n + 2 * i) << " " << (n + 2 * i - 1);
    }
    cout << endl;
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