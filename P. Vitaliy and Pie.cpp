// P. Vitaliy and Pie

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
    string s;
    cin >> s;
    vector<ll> f(26, 0);
    ll ans = 0;
    for (ll i = 0; i < (ll)s.size(); i++)
    {
        if (i % 2 == 0)
        {
            f[s[i] - 'a']++;
        }
        else
        {
            ll x = s[i] - 'A';
            if (f[x] > 0)
            {
                f[x]--;
            }
            else
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}