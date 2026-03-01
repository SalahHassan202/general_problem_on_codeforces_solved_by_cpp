// D. Portal

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> p(n);
    for (auto &v : p)
    {
        cin >> v;
    }

    vector<ll> v;

    for (int i = 0; i < x; i++)
    {
        v.push_back(p[i]);
    }

    for (int i = y; i < n; i++)
    {
        v.push_back(p[i]);
    }

    if (x == y)
    {
        for (int i = 0; i < (int)v.size(); i++)
        {
            if (i > 0)
            {
                cout << ' ';
            }
            cout << v[i];
        }

        cout << endl;
        return;
    }

    ll mn = *min_element(p.begin() + x, p.begin() + y);

    ll idx = x;
    while (p[idx] != mn)
    {
        idx++;
    }

    ll k = (ll)v.size();
    for (int i = 0; i < (int)v.size(); i++)
    {
        if (v[i] >= mn)
        {
            k = i;
            break;
        }
    }

    bool ok = true;
    auto pr = [&](int v)
    {
        if (!ok)
        {
            cout << ' ';
        }
        cout << v;
        ok = false;
    };

    for (int i = 0; i < k; i++)
    {
        pr(v[i]);
    }

    for (int i = idx; i < y; i++)
    {
        pr(p[i]);
    }

    for (int i = x; i < idx; i++)
    {
        pr(p[i]);
    }

    for (int i = k; i < (int)v.size(); i++)
    {
        pr(v[i]);
    }

    cout << endl;
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