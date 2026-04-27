// F. Break Number

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
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ll c = 0;
        while (x % 2 == 0)
        {
            x /= 2;
            c++;
        }
        mx = max(mx, c);
    }
    cout << mx << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}