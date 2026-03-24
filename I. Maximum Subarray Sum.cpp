// I. Maximum Subarray Sum

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
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    ll ok = v1[0];
    ll mx = v1[0];
    for (ll i = 1; i < n; i++)
    {
        ok = max(v1[i], ok + v1[i]);
        mx = max(mx, ok);
    }
    cout << mx << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}