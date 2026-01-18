// X. Life Without Zeros

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    // 101 + 102 = 203 ====> remove zeros =====> 11 + 12 = 23   ===> YES
    // 105 + 106 = 211 ====> remove zeros =====> 15 + 16 = 31   ===> NO
    ll a, b;
    cin >> a >> b;

    ll c = a + b;

    string sa = to_string(a);
    string sb = to_string(b);
    string sc = to_string(c);

    ll na = 0, nb = 0, nc = 0;

    for (char x : sa)
    {
        if (x != '0')
            na = na * 10 + (x - '0');
    }

    for (char x : sb)
    {
        if (x != '0')
            nb = nb * 10 + (x - '0');
    }

    for (char x : sc)
    {
        if (x != '0')
            nc = nc * 10 + (x - '0');
    }

    if (na + nb == nc)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    fast;

    solve();

    return 0;
}
