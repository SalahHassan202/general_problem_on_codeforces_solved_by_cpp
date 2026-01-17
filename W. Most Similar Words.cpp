// W. Most Similar Words

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    // abb
    // bef
    // a - b = 1
    // b - e = 3
    // b - f = 4
    // ans ==> 1 + 3 + 4 = 8

    ll n, m;
    cin >> n >> m;
    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 1e9;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < m; k++)
            {
                sum += abs(a[i][k] - a[j][k]);
            }
            ans = min(ans, sum);
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
