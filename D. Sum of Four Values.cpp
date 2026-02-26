// D. Sum of Four Values

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<ll, pair<ll, ll>> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            ll sum = a[i] + a[j];
            ll ok = x - sum;

            if (mp.count(ok))
            {
                auto [p, q] = mp[ok];

                if (p != i && p != j && q != i && q != j)
                {
                    cout << p + 1 << " " << q + 1 << " " << i + 1 << " " << j + 1 << endl;

                    return;
                }
            }
        }

        for (int j = 0; j < i; j++)
        {
            mp[a[i] + a[j]] = {j, i};
        }
    }

    cout << -1 << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}