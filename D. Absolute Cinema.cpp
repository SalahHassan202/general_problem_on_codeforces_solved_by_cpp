// D. Absolute Cinema

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
    vector<ll> f(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> f[i];
    }

    vector<ll> a(n + 1);

    for (int i = 2; i < n; i++)
    {
        ll ans = f[i + 1] - 2 * f[i] + f[i - 1];
        a[i] = ans / 2;
    }

    ll sum1 = 0;
    for (int i = 2; i < n; i++)
    {
        sum1 = sum1 + a[i] * (i - 1);
    }
    a[n] = (f[1] - sum1) / (n - 1);

    ll sum2 = 0;
    for (int i = 2; i <= n; i++)
    {
        ll y = n - i;
        sum2 = sum2 + a[i] * y;
    }
    a[1] = (f[n] - sum2) / (n - 1);

    for (int i = 1; i <= n; i++)
    {
        cout << a[i];

        if (i != n)
        {
            cout << " ";
        }
    }
    cout << endl;
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