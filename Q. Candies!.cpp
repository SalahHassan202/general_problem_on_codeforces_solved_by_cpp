// Q. Candies!

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

    vector<vector<ll>> v2(20, vector<ll>(n, 0));
    vector<vector<ll>> v3(20, vector<ll>(n, 0));
    for (ll i = 0; i < n; i++)
    {
        v2[0][i] = v1[i];
    }

    for (ll k = 1; (1 << k) <= n; k++)
    {
        for (ll i = 0; i + (1 << k) <= n; i++)
        {
            ll a = v2[k - 1][i];
            ll b = v2[k - 1][i + (1 << (k - 1))];
            if (a + b >= 10)
            {
                v3[k][i] = v3[k - 1][i] + v3[k - 1][i + (1 << (k - 1))] + 1;
            }
            else
            {
                v3[k][i] = v3[k - 1][i] + v3[k - 1][i + (1 << (k - 1))];
            }
            v2[k][i] = (a + b) % 10;
        }
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll len = r - l + 1;
        ll k = 0;
        for (ll i = 0; i < 20; i++)
        {
            if ((1LL << i) <= len)
            {
                k = i;
            }
        }
        cout << v3[k][l - 1] << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}