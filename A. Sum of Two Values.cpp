// A. Sum of Two Values

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
    ll x;
    cin >> n >> x;

    vector<pair<ll, ll>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;

        v[i].second = i + 1;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        ll t = x - v[i].first;

        int l = i + 1, r = n - 1;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (v[mid].first == t)
            {
                cout << v[i].second << " " << v[mid].second << endl;
                return;
            }
            else if (v[mid].first < t)
            {
                l = mid + 1;
            }

            else
            {
                r = mid - 1;
            }
        }
    }

    cout << -1 << endl;
}

int main()
{
    fast

    solve();

    return 0;
}