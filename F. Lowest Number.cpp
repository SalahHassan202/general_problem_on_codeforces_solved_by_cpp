// F. Lowest Number

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
    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll mn = a[0];
    ll pos = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i];
            pos = i;
        }
    }
    cout << mn << " " << pos + 1 << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}