// H. Orac and hassan

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll salah(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return salah(b, a % b);
}

ll hassan(ll a, ll b)
{
    return (a / salah(a, b)) * b;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<ll> v1(n), v2(n);
    v1[0] = v[0];
    for (ll i = 1; i < n; i++)
    {
        v1[i] = salah(v1[i - 1], v[i]);
    }
    v2[n - 1] = v[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        v2[i] = salah(v2[i + 1], v[i]);
    }
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        ll g;
        if (i == 0)
        {
            g = v2[1];
        }
        else if (i == n - 1)
        {
            g = v1[n - 2];
        }
        else
        {
            g = salah(v1[i - 1], v2[i + 1]);
        }
        ans = hassan(ans, g);
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}