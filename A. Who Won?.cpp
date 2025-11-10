// A. Who Won?

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
    if (n == 1 || m == 1)
        cout << "SUM";
    else if (n == 2 && m == 2)
        cout << "DRAW";
    else
        cout << "PRODUCT";
}

int main()
{
    fast;
    solve();
    return 0;
}