// I. Hossam and Combinatorics

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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll mn = *min_element(a.begin(), a.end());
        ll mx = *max_element(a.begin(), a.end());

        if (mn == mx)
        {
            cout << (ll)n * (n - 1) << endl;
        }
        else
        {
            ll cnt1 = 0, cnt2 = 0;
            for (ll x : a)
            {
                if (x == mn)
                    cnt1++;
                if (x == mx)
                    cnt2++;
            }
            cout << cnt1 * cnt2 * 2 << endl;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}