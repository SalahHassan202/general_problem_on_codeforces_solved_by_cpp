// G. Largest Number

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll x = (n / m) * m;
    cout << x << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}