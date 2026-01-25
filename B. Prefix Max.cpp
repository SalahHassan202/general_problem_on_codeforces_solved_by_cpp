// B. Prefix Max

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll value(const vector<int> &a)
{
    ll sum = 0;
    int curr = 0;
    for (int x : a)
    {
        curr = max(curr, x);
        sum += curr;
    }
    return sum;
}

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = value(a);

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(a[i], a[j]);
                ans = max(ans, value(a));
                swap(a[i], a[j]);
            }
        }

        cout << ans << "\n";
    }
}
int main()
{
    fast;

    solve();

    return 0;
}