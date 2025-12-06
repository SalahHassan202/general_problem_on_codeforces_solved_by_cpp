// P36. Little C Loves 3 I

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
    if (n % 3 == 0)
    {
        cout << 1 << " " << 1 << " " << n - 2 << endl;
    }
    else if (n % 3 == 1)
    {
        cout << 1 << " " << 2 << " " << n - 3 << endl;
    }
    else
    { // n % 3 == 2
        cout << 2 << " " << 2 << " " << n - 4 << endl;
    }
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