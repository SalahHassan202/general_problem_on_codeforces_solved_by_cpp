// C. Isamatdin and His Magic Wand!

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
    vector<ll> v(n);
    bool o = false;
    bool e = false;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            e = true;
        }
        else
        {
            o = true;
        }
    }
    if (o && e)
    {
        sort(v.begin(), v.end());
    }

    for (auto x : v)
    {
        cout << x << " ";
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