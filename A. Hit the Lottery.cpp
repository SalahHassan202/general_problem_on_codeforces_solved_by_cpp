// A. Hit the Lottery

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
    ll cnt = 0;
    ll a = n / 100;
    cnt += a;
    n = n % 100;

    ll b = n / 20;
    cnt += b;
    n = n % 20;

    ll c = n / 10;
    cnt += c;
    n = n % 10;

    ll d = n / 5;
    cnt += d;
    n = n % 5;

    ll e = n;
    cnt += n;

    cout << cnt << endl;
}

int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}