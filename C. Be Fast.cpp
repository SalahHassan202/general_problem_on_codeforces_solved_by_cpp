// C. Be Fast

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll x, sum = 0;
    cin >> x;

    for (ll i = 1; i <= x; i++)
    {
        sum += i * i;
    }
    cout << sum;
}

int main()
{
    fast;

    solve();

    return 0;
}
