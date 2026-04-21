// B. Count Balls

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll c = a + b;
    ll d = n / c;
    ll r = n % c;
    ll ans = d * a + min(a, r);
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}