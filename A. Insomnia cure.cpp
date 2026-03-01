// A. Insomnia cure

#include <iostream>
using namespace std;
#define ll long long

void solve()
{
    ll k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    ll cnt = 0;
    for (ll i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{

    solve();

    return 0;
}