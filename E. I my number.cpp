// E. I my number

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << n;
            if (i != n - 1)
                cout << " ";
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