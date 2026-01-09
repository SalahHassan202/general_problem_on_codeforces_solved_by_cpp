// L2. Draw it.

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

void solve()
{
    char c;
    cin >> c;
    ll n;
    cin >> n;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cout << c;
        }
        cout << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
