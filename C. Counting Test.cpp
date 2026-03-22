// C. Counting Test

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll f(vector<vector<ll>> &v1, ll a, ll b, ll n)
{
    ll x = a / n;
    ll y = a % n;

    return x * v1[n][b] + v1[y][b];
}

void solve()
{
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<vector<ll>> v1(n + 1, vector<ll>(26, 0));
    for (ll i = 1; i <= n; i++)
    {
        v1[i] = v1[i - 1];
        v1[i][s[i - 1] - 'a']++;
    }

    while (q--)
    {
        ll l, r;
        char c;
        cin >> l >> r >> c;
        ll x = f(v1, r, c - 'a', n);
        ll y = f(v1, l - 1, c - 'a', n);
        cout << x - y << endl;
    }
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