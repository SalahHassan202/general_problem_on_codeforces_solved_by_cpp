// A. Print Characters

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
    if (n % 2 == 1)
    {
        for (ll i = 0; i < n; i++)
        {
            cout << 'a';
            if (i + 1 < n)
            {
                cout << " ";
            }
        }
    }
    else
    {
        for (ll i = 0; i < n - 1; i++)
        {
            cout << 'a' << " ";
        }
        cout << 'b';
    }
    cout << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}