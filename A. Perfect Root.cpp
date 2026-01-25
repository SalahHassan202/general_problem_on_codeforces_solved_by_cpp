// A. Perfect Root

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cout << i + 1 << " ";

        cout << "\n";
    }
}
int main()
{
    fast;

    solve();

    return 0;
}