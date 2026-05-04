// B. I'm bored with life

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x = min(a, b);
    ll ans = 1;
    for (ll i = 1; i <= x; i++)
    {
        ans *= i;
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}