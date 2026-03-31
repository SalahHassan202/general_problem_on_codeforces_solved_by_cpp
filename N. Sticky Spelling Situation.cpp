// N. Sticky Spelling Situation

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
    string a, b;
    cin >> a >> b;
    vector<ll> v1(26, 0), v2(26, 0);
    for (auto c : a)
    {
        v1[c - 'a']++;
    }

    for (auto c : b)
    {
        v2[c - 'a']++;
    }

    ll ans = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (v1[i] > v2[i])
        {
            ans += v1[i] - v2[i];
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