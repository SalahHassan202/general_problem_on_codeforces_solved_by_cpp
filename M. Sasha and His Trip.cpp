// M. Sasha and His Trip

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, v;
    cin >> n >> v;

    if (v >= n - 1)
    {
        cout << n - 1 << endl;
        return;
    }

    ll tot = v;

    for (int i = 2; i <= n - v; ++i)
    {
        tot += i;
    }

    cout << tot << endl;
}
int main()
{
    fast;

    solve();

    return 0;
}