// F. Devu, the Singer and Churu, the Joker

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

    ll n, d;
    cin >> n >> d;

    vector<ll> t(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        sum += t[i];
    }

    ll rest = 10 * (n - 1);
    ll mn = sum + rest;

    if (mn > d)
    {
        cout << -1 << endl;
        return;
    }

    ll rem = d - mn;

    ll x = 2 * (n - 1);
    ll y = rem / 5;

    cout << x + y << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}