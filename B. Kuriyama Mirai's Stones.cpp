// B. Kuriyama Mirai's Stones

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
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<ll> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }

    vector<ll> u = v;
    sort(u.begin() + 1, u.end());

    vector<ll> s(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        s[i] = s[i - 1] + u[i];
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll t, l, r;
        cin >> t >> l >> r;

        if (t == 1)
        {
            cout << pref[r] - pref[l - 1] << endl;
        }
        else
        {
            cout << s[r] - s[l - 1] << endl;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}