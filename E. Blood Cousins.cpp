// E. Blood Cousins

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const ll N = 100005;
const ll G = 20;
vector<ll> j[N];
vector<pair<ll, ll>> q[N];
ll p1[N][G];
ll d[N];
ll v3[N], v4[N], m1 = 0;
vector<ll> h[N];
ll res[N];
void salah(ll o, ll e)
{
    v3[o] = ++m1;
    p1[o][0] = e;
    for (ll j = 1; j < G; j++)
    {
        p1[o][j] = p1[p1[o][j - 1]][j - 1];
    }

    h[d[o]].push_back(v3[o]);
    for (auto y : j[o])
    {
        if (y == e)
        {
            continue;
        }
        d[y] = d[o] + 1;
        salah(y, o);
    }
    v4[o] = m1;
}

ll hassan(ll o, ll k)
{
    for (ll j = 0; j < G; j++)
    {
        if (k & (1 << j))
        {
            o = p1[o][j];
        }
    }
    return o;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v1;
    for (ll i = 1; i <= n; i++)
    {
        ll p;
        cin >> p;
        if (p == 0)
        {
            v1.push_back(i);
        }
        else
        {
            j[p].push_back(i);
        }
    }

    for (auto w : v1)
    {
        d[w] = 1;
        salah(w, 0);
    }

    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll v, p;
        cin >> v >> p;
        ll k = hassan(v, p);
        if (k == 0)
        {
            res[i] = 0;
            continue;
        }
        ll t = d[v];
        auto &it = h[t];
        ll l = lower_bound(it.begin(), it.end(), v3[k]) - it.begin();
        ll r = upper_bound(it.begin(), it.end(), v4[k]) - it.begin();
        res[i] = r - l - 1;
    }
    for (ll i = 0; i < m; i++)
    {
        cout << res[i] << " ";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}