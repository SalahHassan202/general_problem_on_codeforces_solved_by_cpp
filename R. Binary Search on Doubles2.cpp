// R. Binary Search on Doubles2

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, l;
    cin >> n >> l;
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());

    double ans = max((double)v1[0], (double)(l - v1[n - 1]));
    for (ll i = 1; i < n; i++)
    {
        ans = max(ans, (v1[i] - v1[i - 1]) / 2.0);
    }
    cout << fixed << setprecision(10) << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}