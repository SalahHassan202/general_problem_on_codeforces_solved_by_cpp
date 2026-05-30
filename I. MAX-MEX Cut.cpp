// I. MAX-MEX Cut

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
    string a, b;
    cin >> a >> b;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            ans += 2;
        }
        else if (a[i] == '0')
        {
            if (i + 1 < n && a[i + 1] == '1' && b[i + 1] == '1')
            {
                ans += 2;
                i++;
            }
            else
            {
                ans += 1;
            }
        }
        else
        {
            if (i + 1 < n && a[i + 1] == '0' && b[i + 1] == '0')
            {
                ans += 2;
                i++;
            }
        }
    }
    cout << ans << endl;
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