// E. Pepsi can

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
    ll c1 = n / 3;
    ll c2 = n / 3;

    if (n % 3 == 1)
        c1++;
    if (n % 3 == 2)
        c2++;

    cout << c1 << " " << c2 << "\n";
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
