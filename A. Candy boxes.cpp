// A. Candy boxes

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
    ll ans = (n / 1000) % 10;
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}