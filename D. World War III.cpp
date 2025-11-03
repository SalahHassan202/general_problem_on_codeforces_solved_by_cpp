// D. World War III
#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, r;
    cin >> n >> r;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll fi = 0, la = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == r)
        {
            cnt++;
            if (fi == 0)
                fi = 1 + i;
            la = i + 1;
        }
    }

    if (cnt == 0)
        cout << -1 << endl;
    else
        cout << fi << " " << la << " " << cnt << endl;
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}