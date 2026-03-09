// A. Is It A Math Problem?

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
    ll d = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n)
            {
                d += 1;
            }
            else
            {
                d += 2;
            }
        }
    }

    ll sq = round(sqrt(n));
    if (sq * sq == n)
    {
        cout << sq << " " << d << endl;
    }
    else
    {
        cout << n << " " << d / 2 << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}