// V. Sum of Odd Integers

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if ((n % 2 == k % 2) && (k * k <= n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
