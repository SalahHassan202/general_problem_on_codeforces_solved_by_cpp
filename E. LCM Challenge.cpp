// E. LCM Challenge

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
    if (n <= 2)
    {
        cout << n << endl;
    }
    else if (n == 3)
    {
        cout << 6 << endl;
    }
    else if (n % 2 != 0)
    {
        cout << n * (n - 1) * (n - 2) << endl;
    }
    else
    {
        if (n % 3 == 0)
        {
            cout << (n - 1) * (n - 2) * (n - 3) << endl;
        }
        else
        {
            cout << n * (n - 1) * (n - 3) << endl;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}