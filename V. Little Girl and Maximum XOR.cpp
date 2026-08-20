// V. Little Girl and Maximum XOR

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    if (l == r)
    {
        cout << 0 << endl;
        return;
    }

    ll a = -1;
    for (int i = 62; i >= 0; i--)
    {
        ll b = (l >> i) & 1;
        ll c = (r >> i) & 1;

        if (b != c)
        {
            a = i;
            break;
        }
    }

    ll res = 0;
    for (int i = 0; i <= a; i++)
    {
        ll d = (1LL << i);
        res = res + d;
    }

    cout << res << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}