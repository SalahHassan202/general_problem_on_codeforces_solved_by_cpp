// B. Subarray Sums I

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    ll l = 0, s = 0, ans = 0;
    for (ll r = 0; r < n; r++)
    {
        s += v1[r];
        while (s > x)
        {
            s -= v1[l];
            l++;
        }

        if (s == x)
        {
            ans++;
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