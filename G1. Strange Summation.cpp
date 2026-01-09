// G1. Strange Summation

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << a % 10 + b % 10;
}

int main()
{
    fast;

    solve();

    return 0;
}
