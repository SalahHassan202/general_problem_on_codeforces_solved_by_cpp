// O. New Year and Old Property

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll c = 0;
    for (ll j = 2; j <= 60; j++)
    {
        ll num = (1LL << j) - 1;

        for (ll i = 0; i < j - 1; i++)
        {
            ll t = num ^ (1LL << i);
            if (t >= a && t <= b)
            {
                c++;
            }
        }
    }
    cout << c << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}