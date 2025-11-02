// B. Pong Ping
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
    ll s = a + b;
    ll p = s / 2;
    if (p % 2 == 0)
        cout << "Beevo" << endl;
    else
        cout << "Oveeb" << endl;
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}