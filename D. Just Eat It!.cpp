// D. Just Eat It!

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll salah(vector<ll> &v1, ll l, ll r)
{
    ll cur = 0, mx = -1e18;
    for (ll i = l; i <= r; i++)
    {
        cur += v1[i];
        if (cur > mx)
        {
            mx = cur;
        }

        if (cur < 0)
        {
            cur = 0;
        }
    }
    return mx;
}

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
    ll a = salah(v1, 0, n - 2);
    ll b = salah(v1, 1, n - 1);

    if (a >= sum || b >= sum)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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