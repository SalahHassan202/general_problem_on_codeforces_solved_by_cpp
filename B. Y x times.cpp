// B. Y x times

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll y, x;
    cin >> y >> x;
    for (ll i = 0; i < x; i++)
    {
        cout << y;
        if (i + 1 < x)
        {
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}