// G. Balanced Round

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
    sort(a.begin(), a.end());
    ll mx = 1, cur = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] <= k)
        {
            cur++;
        }
        else
        {
            cur = 1;
        }

        mx = max(cur, mx);
    }
    cout << n - mx << endl;
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
