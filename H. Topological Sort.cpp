// H. Topological Sort

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

const ll inf = 1e18;
struct Tree
{
    vector<ll> z, y;
    Tree(ll n)
    {
        z.assign(4 * n + 5, 0);
        y.assign(4 * n + 5, 0);
    }

    void salah(ll d)
    {
        if (y[d])
        {
            z[d * 2] += y[d];
            z[d * 2 + 1] += y[d];
            y[d * 2] += y[d];
            y[d * 2 + 1] += y[d];
            y[d] = 0;
        }
    }

    void mazen(ll d, ll l, ll r, vector<ll> &v)
    {
        if (l == r)
        {
            z[d] = v[l];
            return;
        }

        ll u = (l + r) / 2;
        mazen(d * 2, l, u, v);
        mazen(d * 2 + 1, u + 1, r, v);
        z[d] = min(z[d * 2], z[d * 2 + 1]);
    }

    void hassan(ll d, ll l, ll r, ll ql, ll qr, ll val)
    {
        if (l > qr || r < ql)
        {
            return;
        }

        if (l >= ql && r <= qr)
        {
            z[d] += val;
            y[d] += val;
            return;
        }
        salah(d);
        ll u = (l + r) / 2;
        hassan(d * 2, l, u, ql, qr, val);
        hassan(d * 2 + 1, u + 1, r, ql, qr, val);
        z[d] = min(z[d * 2], z[d * 2 + 1]);
    }

    ll mostafa(ll d, ll l, ll r)
    {
        if (z[d] > 0)
        {
            return -1;
        }

        if (l == r)
        {
            return l;
        }
        salah(d);
        ll u = (l + r) / 2;
        if (z[d * 2 + 1] == 0)
        {
            return mostafa(d * 2 + 1, u + 1, r);
        }
        return mostafa(d * 2, l, u);
    }
};

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> j(n + 1);
    vector<ll> in(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        in[i] = i - 1;
    }

    for (ll i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        j[a].push_back(b);
        in[b]--;
    }

    Tree sg(n);
    sg.mazen(1, 1, n, in);
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        ll x = sg.mostafa(1, 1, n);
        ans.push_back(x);
        sg.hassan(1, 1, n, x, x, inf);
        if (x + 1 <= n)
        {
            sg.hassan(1, 1, n, x + 1, n, -1);
        }

        for (auto to : j[x])
        {
            sg.hassan(1, 1, n, to, to, 1);
        }
    }

    for (auto x : ans)
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