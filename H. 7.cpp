// H. 7

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
    vector<ll> f;
    f.push_back(1);
    f.push_back(1);
    while (true)
    {
        ll x = f[f.size() - 1] + f[f.size() - 2];
        if (x > n)
        {
            break;
        }
        f.push_back(x);
    }

    vector<bool> ok(n + 1, 0);
    for (ll x : f)
    {
        if (x <= n)
        {
            ok[x] = 1;
        }
    }

    for (ll i = 1; i <= n; i++)
    {
        if (ok[i])
        {
            cout << 'O';
        }
        else
        {
            cout << 'o';
        }
    }
    cout << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}