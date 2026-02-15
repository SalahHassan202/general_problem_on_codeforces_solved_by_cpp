// B. Heapify 1

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

int idx(int n)
{
    while (n % 2 == 0)
    {
        n /= 2;
    }
    return n;
}

void solve()
{
    ll n;
    cin >> n;
    bool ok = true;

    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (idx(i) != idx(x))
        {
            ok = false;
        }
    }

    if (ok)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    fast;

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}