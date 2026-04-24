// C. Raising Bacteria

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    ll c = 0;
    while (x > 0)
    {
        if (x & 1)
        {
            c++;
        }
        x >>= 1;
    }
    cout << c << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}