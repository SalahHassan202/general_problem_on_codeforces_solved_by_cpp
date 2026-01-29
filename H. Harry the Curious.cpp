// H. Harry the Curious

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll l, r, n;
    cin >> l >> r >> n;
    bool ok = false;

    for (int i = l; i <= r; i++)
    {
        if (i < 2)
            continue;

        bool prime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime && n % i == 0)
        {
            cout << i << " ";
            ok = true;
        }
    }

    if (!ok)
        cout << -1;

    cout << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}
