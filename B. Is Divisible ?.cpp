// B. Is Divisible ?

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll s = a + b;
    cout << n / s << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}