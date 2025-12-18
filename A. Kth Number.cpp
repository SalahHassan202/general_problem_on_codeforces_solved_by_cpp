// A. Kth Number

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        ll x = a[i] - (i + 1); // missing number
        if (x >= k)
        {
            cout << a[i] - (x - k + 1);
            return;
        }
    }

    cout << a[n - 1] + (k - (a[n - 1] - n));
}

int main()
{
    fast;

    solve();

    return 0;
}