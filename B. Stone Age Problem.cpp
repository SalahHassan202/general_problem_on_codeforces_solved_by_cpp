// B. Stone Age Problem

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v1(n + 1);
    vector<ll> v2(n + 1, 0);
    ll s = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> v1[i];
        s += v1[i];
    }

    ll g = 0, l = -1, e = 1;
    while (q--)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll b, x;
            cin >> b >> x;
            ll o;
            if (l == -1)
            {
                o = v1[b];
            }
            else
            {
                if (v2[b] > l)
                {
                    o = v1[b];
                }
                else
                {
                    o = g;
                }
            }
            s -= o;
            s += x;
            v1[b] = x;
            v2[b] = e;
            cout << s << endl;
        }
        else
        {
            ll x;
            cin >> x;
            g = x;
            s = n * x;
            l = e;
            cout << s << endl;
        }
        e++;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}