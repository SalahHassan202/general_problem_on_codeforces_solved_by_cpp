// A. Eating Game

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

    ll tot = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        tot += v[i];
    }

    set<ll> w;

    for (int s = 0; s < n; s++)
    {
        vector<ll> x = v;
        ll r = tot;
        ll c = s;
        ll l = -1;

        while (r > 0)
        {
            if (x[c] > 0)
            {
                x[c]--;
                r--;

                if (r == 0)
                {
                    l = c;
                    break;
                }
            }
            c = (c + 1) % n;
        }
        w.insert(l);
    }

    cout << w.size() << endl;
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