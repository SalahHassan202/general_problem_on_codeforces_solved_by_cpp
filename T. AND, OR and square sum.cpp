// T. AND, OR and square sum

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
    vector<ll> v(20, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        for (ll j = 0; j < 20; j++)
        {
            if ((x >> j) & 1)
            {
                v[j]++;
            }
        }
    }

    ll tot = 0;
    for (ll i = 0; i < n; i++)
    {
        ll val = 0;
        for (ll j = 0; j < 20; j++)
        {
            if (v[j] > 0)
            {
                val |= (1LL << j);
                v[j]--;
            }
        }
        tot += (val * val);
    }
    cout << tot << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}