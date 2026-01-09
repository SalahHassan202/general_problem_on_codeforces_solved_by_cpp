// L1. Summation from 1 to N

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
    cout << (n * (n + 1)) / 2;
}

int main()
{
    fast;

    solve();

    return 0;
}
