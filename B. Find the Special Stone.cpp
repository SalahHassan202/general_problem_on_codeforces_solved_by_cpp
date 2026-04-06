// B. Find the Special Stone

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
    vector<ll> v1(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v1[i];
    }

    vector<ll> pre(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v1[i];
    }

    ll l = 1, r = n;
    while (l < r)
    {
        ll m = (l + r) / 2;
        cout << "? " << (m - l + 1) << " ";
        for (ll i = l; i <= m; i++)
        {
            cout << i << " ";
        }

        cout << endl;
        cout.flush();
        ll x;
        cin >> x;
        ll sum = pre[m] - pre[l - 1];
        if (x > sum)
        {
            r = m;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << "! " << l << endl;
    cout.flush();
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