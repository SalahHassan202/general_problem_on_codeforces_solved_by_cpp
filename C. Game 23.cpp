// C. Game 23

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
    if (m % n != 0)
    {
        cout << -1 << endl;
        return;
    }

    ll x = m / n;
    ll c = 0;
    while (x % 2 == 0)
    {
        x /= 2;
        c++;
    }

    while (x % 3 == 0)
    {
        x /= 3;
        c++;
    }

    if (x != 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << c << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}