// B. 2

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const ll N = 1000005;
ll b[N];
void salah(ll g, ll v)
{
    while (g < N)
    {
        b[g] += v;
        g += g & -g;
    }
}

ll hassan(ll g)
{
    ll ans = 0;
    while (g > 0)
    {
        ans += b[g];
        g -= g & -g;
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1), l(n + 1), r(n + 1);
    map<ll, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        l[i] = mp[a[i]];
    }
    mp.clear();
    for (ll i = n; i >= 1; i--)
    {
        mp[a[i]]++;
        r[i] = mp[a[i]];
    }
    ll ans = 0;
    for (ll i = n; i >= 1; i--)
    {
        ans += hassan(l[i] - 1);
        salah(r[i], 1);
    }

    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}