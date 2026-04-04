// B.The 67th 6-7 Integer Problem

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    vector<ll> v1(7);
    for (ll i = 0; i < 7; i++)
    {
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());
    ll a;
    a = 0;
    for (ll i = 0; i < 6; i++)
    {
        a -= v1[i];
    }
    a += v1[6];
    cout << a << endl;
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