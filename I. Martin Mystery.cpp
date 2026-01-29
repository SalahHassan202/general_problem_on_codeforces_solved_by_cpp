// I. Martin Mystery

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
    ll x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    ll dx = x2 - x1;
    ll dy = y2 - y1;

    for (int i = 3; i <= n; i++)
    {
        ll x, y;
        cin >> x >> y;

        if (dx * (y - y1) != dy * (x - x1))
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}
