// C. playing with numbers

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll a = x * (n % y);
    ll b = (x * n) % y;
    cout << a << " " << b << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}