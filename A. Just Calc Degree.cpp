// A. Just Calc Degree

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
    vector<vector<ll>> v1(n + 1);
    for (ll i = 2; i <= n; i++)
    {
        ll x;
        cin >> x;
        v1[x].push_back(i);
    }

    for (ll i = 1; i <= n; i++)
    {
        if (v1[i].size() == 0)
        {
            continue;
        }

        ll c = 0;
        for (auto x : v1[i])
        {
            if (v1[x].size() == 0)
            {
                c++;
            }
        }
        if (c < 3)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}