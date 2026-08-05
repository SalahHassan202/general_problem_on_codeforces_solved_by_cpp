// R. Stripe

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
    vector<ll> v1(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
        sum += v1[i];
    }
    if (sum % 2 != 0)
    {
        cout << 0 << endl;
        return;
    }

    ll ok = sum / 2;
    ll c = 0, ans = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        c += v1[i];
        if (c == ok)
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}