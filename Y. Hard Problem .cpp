// Y. Hard Problem

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll mx = max({a, b, c});
    ll mn = min({a, b, c});
    ll md = a + b + c - mx - mn;

    cout << mn << " " << md << " " << mx;
}

int main()
{
    fast;

    solve();

    return 0;
}
