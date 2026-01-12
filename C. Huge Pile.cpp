// C. Huge Pile

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (n == k)
    {
        cout << 0 << "\n";
        return;
    }

    set<ll> ss;
    ss.insert(n);
    ll m = 0;

    while (!ss.empty())
    {
        m++;
        set<ll> l;
        bool found = false;

        for (ll x : ss)
        {
            if (x < 2)
                continue;
            ll x1 = x / 2;
            ll x2 = (x + 1) / 2;

            if (x1 == k || x2 == k)
            {
                found = true;
                break;
            }

            if (x1 > k)
                l.insert(x1);
            if (x2 > k)
                l.insert(x2);
        }

        if (found)
        {
            cout << m << "\n";
            return;
        }

        if (l.empty())
            break;
        ss = l;
    }

    cout << -1 << "\n";
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