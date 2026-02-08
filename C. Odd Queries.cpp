// C. Odd Queries

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<ll> a(n + 1), pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }

        ll tot_sum = pref[n];

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;

            ll sum1 = pref[r] - pref[l - 1];
            ll sum2 = (ll)(r - l + 1) * k;

            ll tot = tot_sum - sum1 + sum2;

            if (tot % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}