// D. Taxes

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

bool salah(ll n)
{
    if (n < 2)
    {
        return false;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    if (salah(n))
    {
        cout << 1 << endl;
    }
    else if (n % 2 == 0 || salah(n - 2))
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}