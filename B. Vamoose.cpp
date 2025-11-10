// B. Vamoose

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll sum = 0;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    bool ok = true;
    for (int i = 0; i < n - 1; i++)
    {
        if ((v[i] + v[i + 1]) % x != 0)
        {
            ok = false;
            cout << "No";
            return;
        }
    }
    if (ok)
    {
        if (sum % x != 0)
        {
            ok = false;
        }
    }

    if (ok)
        cout << "Yes";
    else
        cout << "No";
}

int main()
{
    fast;
    solve();
    return 0;
}