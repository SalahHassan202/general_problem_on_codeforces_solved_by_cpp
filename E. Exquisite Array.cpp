// E. Exquisite Array

#include <bits/stdc++.h>
#define ll long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];

    vector<vector<int>> v(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int d = abs(p[i] - p[i + 1]);
        if (d < n)
            v[d].push_back(i);
    }

    set<int> s;
    s.insert(-1);
    s.insert(n - 1);

    auto f = [&](ll x)
    {
        if (x <= 0)
            return 0LL;
        return x * (x + 1) / 2;
    };

    ll cur = f(n - 1);
    vector<ll> res(n);

    for (int k = 1; k < n; k++)
    {
        res[k] = cur;
        for (int i : v[k])
        {
            auto it = s.lower_bound(i);
            int r = *it;
            int l = *(--it);
            cur -= f(r - l - 1);
            s.insert(i);
            cur += f(i - l - 1);
            cur += f(r - i - 1);
        }
    }

    for (int k = 1; k < n; k++)
    {
        cout << res[k] << (k == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}