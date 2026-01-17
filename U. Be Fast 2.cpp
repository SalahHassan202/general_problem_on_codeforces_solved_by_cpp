// U. Be Fast 2

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll l, r, n;
    cin >> l >> r >> n;
    ll cnt = r / n - (l - 1) / n;
    cout << (r - l + 1) - cnt << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}
