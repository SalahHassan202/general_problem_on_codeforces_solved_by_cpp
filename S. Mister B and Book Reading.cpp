// S. Mister B and Book Reading

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;
void solve()
{
    ll x, y, z, w, t;
    cin >> x >> y >> z >> w >> t;

    ll d = 1;
    ll p = y;
    ll s = y;

    while (p < x)
    {
        s = min(z, s + w);
        p += s - t;
        d++;
    }

    cout << d << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}
