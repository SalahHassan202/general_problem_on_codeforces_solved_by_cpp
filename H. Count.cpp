// H. Count

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l, r, x;
    ll cnt = 0;
    while (q--)
    {
        cin >> l >> r >> x;
        l--, r--;
        for (int i = l; i <= r; i++)
        {
            if (a[i] == x)
                cnt++;
        }
        cout << cnt << endl;
        cnt = 0;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}