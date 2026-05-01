// F. 5

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        ans += (1LL << i);
    }

    ll v = 0;
    for (ll i = 0; i < n; i++)
    {
        v <<= 1;
        if (s[i] == '7')
        {
            v |= 1;
        }
    }
    cout << ans + v + 1 << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}