// K. Shifting Sort

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
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    vector<tuple<ll, ll, ll>> v2;
    for (ll i = 0; i < n; i++)
    {
        ll p = i;
        for (ll j = i; j < n; j++)
        {
            if (v1[j] < v1[p])
            {
                p = j;
            }
        }

        if (p == i)
        {
            continue;
        }
        ll d = p - i;
        v2.push_back({i + 1, p + 1, d});
        vector<ll> temp;
        for (ll j = i; j <= p; j++)
        {
            temp.push_back(v1[j]);
        }
        rotate(temp.begin(), temp.begin() + d, temp.end());
        for (ll j = i; j <= p; j++)
        {
            v1[j] = temp[j - i];
        }
    }
    cout << v2.size() << endl;
    for (auto [a, b, c] : v2)
    {
        cout << a << " " << b << " " << c << endl;
    }
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