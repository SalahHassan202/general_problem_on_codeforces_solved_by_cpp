// Z. Elgoker's Red Eye

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const ll BASE = 31;
const ll MOD = 1000000007;

void solve()
{
    string s;
    cin >> s;

    ll n = s.size();
    string rev = s;
    reverse(rev.begin(), rev.end());

    vector<ll> h1(n + 1, 0), h2(n + 1, 0), p(n + 1, 1);

    for (ll i = 1; i <= n; i++)
        p[i] = (p[i - 1] * BASE) % MOD;

    for (ll i = 0; i < n; i++)
        h1[i + 1] = (h1[i] * BASE + (s[i] - 'a' + 1)) % MOD;

    for (ll i = 0; i < n; i++)
        h2[i + 1] = (h2[i] * BASE + (rev[i] - 'a' + 1)) % MOD;

    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;

        ll hash1 = (h1[r + 1] - h1[l] * p[r - l + 1] % MOD + MOD) % MOD;

        ll rl = n - r - 1;
        ll rr = n - l - 1;

        ll hash2 = (h2[rr + 1] - h2[rl] * p[r - l + 1] % MOD + MOD) % MOD;

        if (hash1 == hash2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
