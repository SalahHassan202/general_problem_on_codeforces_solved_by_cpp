// A. Social Experiment

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    if (n == 2)
        cout << 2 << "\n";
    else if (n % 2 == 0)
        cout << 0 << "\n";
    else
        cout << 1 << "\n";
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
