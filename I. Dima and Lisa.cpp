// I. Dima and Lisa

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
    if (n % 2 == 0)
    {
        return (n == 2);
    }
    for (ll i = 3; i * i <= n; i += 2)
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
        cout << n << endl;
        return;
    }
    if (salah(n - 2))
    {
        cout << 2 << endl;
        cout << 2 << " " << n - 2 << endl;
        return;
    }
    ll x = n - 3;
    for (ll i = 2; i <= x; i++)
    {
        if (salah(i) && salah(x - i))
        {
            cout << 3 << endl;
            cout << 3 << " " << i << " " << x - i << endl;
            return;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}