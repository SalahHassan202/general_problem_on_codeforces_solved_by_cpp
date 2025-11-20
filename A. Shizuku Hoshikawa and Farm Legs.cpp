// A. Shizuku Hoshikawa and Farm Legs

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
    if (n % 2 != 0)
    {
        cout << 0 << endl;
        return;
    }

    ll c = n / 4;
    cout << c + 1 << endl;
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}