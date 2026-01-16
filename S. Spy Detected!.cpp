// S. Spy Detected!

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
    ll freq[101] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    ll num;
    for (int i = 0; i < n; i++)
    {
        if (freq[a[i]] == 1)
        {
            cout << i + 1 << endl;
            return;
        }
    }
}

int main()
{
    fast;

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
