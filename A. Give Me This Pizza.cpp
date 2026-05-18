// A. Give Me This Pizza

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const ll N = 100005;
ll g[4 * N];
vector<ll> v;
void salah(ll nd, ll l, ll r)
{
    if (l == r)
    {
        g[nd] = v[l];
        return;
    }
    ll md = (l + r) / 2;
    salah(nd * 2, l, md);
    salah(nd * 2 + 1, md + 1, r);
    g[nd] = max(g[nd * 2], g[nd * 2 + 1]);
}

ll hassan(ll nd, ll l, ll r, ll ql, ll qr, ll vl)
{
    if (r < ql || l > qr)
    {
        return -1;
    }

    if (g[nd] <= vl)
    {
        return -1;
    }

    if (l == r)
    {
        return v[l];
    }
    ll md = (l + r) / 2;
    ll lf = hassan(nd * 2, l, md, ql, qr, vl);
    if (lf != -1)
    {
        return lf;
    }
    return hassan(nd * 2 + 1, md + 1, r, ql, qr, vl);
}

void solve()
{
    ll n;
    cin >> n;
    v.resize(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    salah(1, 1, n);
    for (ll i = 1; i <= n; i++)
    {
        ll ans = hassan(1, 1, n, i + 1, n, v[i]);
        cout << ans << " ";
    }
    cout << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}