// C. Sum of Three Values

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

    vector<pair<ll, ll>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;

        v[i].second = i + 1;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        ll l = i + 1;
        ll r = n - 1;

        while (l < r)
        {
            ll sum = v[i].first + v[l].first + v[r].first;

            if (sum == x)
            {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << endl;
                return;
            }
            else if (sum < x)
            {
                l++;
            }
            else
            {
                r--;
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