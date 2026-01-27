// F. One and Two

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll tot2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
            {
                tot2++;
            }
        }

        if (tot2 % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        ll cnt = 0;
        ll ans = -1;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == 2)
            {
                cnt++;
            }

            if (cnt == tot2 - cnt)
            {
                ans = i + 1;
                break;
            }
        }

        cout << ans << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}