// L. Eating Candies

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
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll l = 0, r = n - 1, s1 = 0, s2 = 0, ans = 0;
    while (l <= r)
    {
        if (s1 <= s2)
        {
            s1 += v[l];
            l++;
        }
        else
        {
            s2 += v[r];
            r--;
        }

        if (s1 == s2)
        {
            ans = l + (n - 1 - r);
        }
    }
    cout << ans << endl;
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