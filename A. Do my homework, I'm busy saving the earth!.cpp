// A. Do my homework, I'm busy saving the earth!

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, cnt = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<ll> s = v;

    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i] == s[i])
            cnt++;
    }
    cout << cnt;
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}