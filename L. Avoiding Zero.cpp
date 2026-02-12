// L. Avoiding Zero

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
        vector<ll> a(n);
        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        if (sum > 0)
            sort(a.begin(), a.end(), greater<ll>());
        else
            sort(a.begin(), a.end());

        for (auto x : a)
            cout << x << " ";
        cout << endl;
    }
}
int main()
{
    fast;

    solve();

    return 0;
}