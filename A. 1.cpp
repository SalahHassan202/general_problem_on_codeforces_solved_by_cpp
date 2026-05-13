// A. 1

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const int N = 10005;
ll t[11][N];
ll a[N], n, m;

void salah(ll f, ll g, ll v)
{
    while (g <= n)
    {
        t[f][g] += v;
        g += g & -g;
    }
}

ll sum(ll f, ll g)
{
    ll ans = 0;
    while (g > 0)
    {
        ans += t[f][g];
        g -= g & -g;
    }
    return ans;
}

ll hassan(ll f, ll l, ll r)
{
    return sum(f, r) - sum(f, l - 1);
}

void solve()
{
    cin >> n >> m;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];

        salah(a[i] % m, i, a[i]);
    }

    ll q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        if (c == 's')
        {
            ll l, r, o;
            cin >> l >> r >> o;
            cout << hassan(o, l, r) << endl;
        }
        else if (c == '+')
        {
            ll p, r;
            cin >> p >> r;
            salah(a[p] % m, p, -a[p]);
            a[p] += r;
            salah(a[p] % m, p, a[p]);
            cout << a[p] << endl;
        }
        else
        {
            ll p, r;
            cin >> p >> r;
            salah(a[p] % m, p, -a[p]);
            if (a[p] >= r)
            {
                a[p] -= r;
            }
            salah(a[p] % m, p, a[p]);
            cout << a[p] << endl;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}