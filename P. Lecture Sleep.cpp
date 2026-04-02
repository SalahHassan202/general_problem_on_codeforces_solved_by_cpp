// P. Lecture Sleep

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v1(n), v2(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (ll i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    ll ok = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v2[i] == 1)
        {
            ok += v1[i];
        }
    }

    ll c = 0;
    for (ll i = 0; i < k; i++)
    {
        if (v2[i] == 0)
        {
            c += v1[i];
        }
    }

    ll mx = c;
    for (ll i = k; i < n; i++)
    {
        if (v2[i] == 0)
        {
            c += v1[i];
        }
        if (v2[i - k] == 0)
        {
            c -= v1[i - k];
        }
        if (c > mx)
        {
            mx = c;
        }
    }
    cout << ok + mx << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}